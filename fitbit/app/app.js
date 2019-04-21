import document from "document";
import { HeartRateSensor } from "heart-rate";
import * as messaging from "messaging";

let hrLabel = document.getElementById("hrm-data");
hrLabel.text = "--";

let hrm = new HeartRateSensor();

hrm.onreading = function() {
  // Peeks current sensor values.
  console.log("Current heart rate: " + hrm.heartRate);
  hrLabel.text = hrm.heartRate;
  sendMessage();
}

hrm.start();

/*
 *  Sends message to peer.
 */
function sendMessage() {
  var data = {
    hrm: {
      heartRate: hrm.heartRate
    }
  }

  if (messaging.peerSocket.readyState === messaging.peerSocket.OPEN) {
    // Sends data to peer as message.
    messaging.peerSocket.send(data);
  }
}
