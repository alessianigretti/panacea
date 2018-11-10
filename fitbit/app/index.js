import document from "document";
import { HeartRateSensor } from "heart-rate";
import * as messaging from "messaging";

let hrLabel = document.getElementById("hrm-data");
hrLabel.text = "--";

let hrm = new HeartRateSensor();

hrm.onreading = function() {
  // Peek the current sensor values
  console.log("Current heart rate: " + hrm.heartRate);
  hrLabel.text = hrm.heartRate;
  sendMessage();
}

hrm.start();

// Send a message to the peer
function sendMessage() {
  // Sample data
  var data = {
    hrm: {
      heartRate: hrm.heartRate
    }
  }

  if (messaging.peerSocket.readyState === messaging.peerSocket.OPEN) {
    // Send the data to peer as a message
    messaging.peerSocket.send(data);
  }
}

function refreshData() {
  let data = {
    hrm: {
      heartRate: hrm.heartRate
    }
  };

  hrmData.text = JSON.stringify(data.hrm);
  
  sendMessage();
}

// Counter used to limit the amount of messages sent
var counter = 0;

function sendMoreData() {
  // Artificial limit of 100 messages
  if (counter < 100) {
    // Send data only while the buffer contains less than 128 bytes
    while (messaging.peerSocket.bufferedAmount < 128) {
      // Send the incremented counter value as the message
      refreshData();
      counter++;
    }
  }
}

/*messaging.peerSocket.onopen = function() {
  // Ready to send messages
  sendMessage();
}

// Listen for the onerror event
messaging.peerSocket.onerror = function(err) {
  // Handle any errors
  console.log("Connection error: " + err.code + " - " + err.message);
}

// Listen for the onmessage event
messaging.peerSocket.onmessage = function(evt) {
  // Output the message to the console
  console.log(JSON.stringify(evt.data));
}

// Listen for the onbufferedamountdecrease event
messaging.peerSocket.onbufferedamountdecrease = function() {
  // Amount of buffered data has decreased, continue sending data
  sendMoreData();
}*/
