import * as messaging from "messaging";

function displayData() {
  messaging.peerSocket.addEventListener("message", (evt) => {
    if (evt.data) {
      console.log("Heart rate on companion: " + evt.data.hrm.heartRate);
      
      postData('https://clever-deer-30.localtunnel.me/heartrate/', {hrm: evt.data.hrm.heartRate})
      .then(data => console.log(JSON.stringify(data)))
      .catch(error => console.error(error));
    }})
};


function postData(url = "", data = {}) {
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

function get() {
  fetch('https://horrible-impala-72.localtunnel.me/heartrate/GET?source=fitbit')
  .then(response => console.log(response.json().then(data => ({data: data}))))
  .then(res => {console.log(res.data)});
}
displayData();
