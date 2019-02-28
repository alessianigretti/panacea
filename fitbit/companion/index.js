import * as messaging from "messaging";

/*
 * Displays data from companion to console and initiates posting to local web server.
 */
function displayData() {
  messaging.peerSocket.addEventListener("message", (evt) => {
    if (evt.data) {
      console.log("Heart rate on companion: " + evt.data.hrm.heartRate);
      
      // Post data to local web server
      postData('http://192.168.1.15:8080/heartrate/', {hrm: evt.data.hrm.heartRate})
      .then(data => console.log(JSON.stringify(data)))
      .catch(error => console.error(error));
    }})
};

/*
 * Posts to local web server via JSON fetch request.
 */
function postData(url = "", data = {}) {
  // Post data as json
  return fetch(url, {
        method: "POST",
        headers: {
            'Content-Type': 'application/json',
            'Accept': 'application/json'
        },
        body: JSON.stringify(data),
    })
    .then(response => response.json())
    .then((messages) => {console.log("messages");});
}

displayData();
