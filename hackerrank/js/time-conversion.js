function timeConversion(s) {
  // Write your code here
  const input = s.split(":");
  var hours = parseInt(input[0]);
  var timeFrame = input[2].slice(2);
  var seconds = input[2].slice(0, 2);
  if (timeFrame === "PM" && hours !== 12) {
    hours += 12;
  }
  if (hours === 12 && timeFrame === "AM") {
    hours = "00";
  } else if (hours < 10) {
    hours = "0" + hours.toString();
  } else {
    hours = hours.toString();
  }
  return [hours, input[1], seconds].join(":");
}
console.log(timeConversion("07:05:45PM"));
