const nemo = ["nemo"];
const everyone = [
  "akaza",
  "douma",
  "kokushibo",
  "nemo",
  "hantengu",
  "gyokko",
  "muzan",
];
const hashira = new Array(100).fill("nemo");
function findNemo(array) {
  let i1 = performance.now();
  for (let i = 0; i < array.length; i++) {
    if (array[i] == "nemo") {
      // console.log("Found NEMO!");
    }
  }
  let i2 = performance.now();
  console.log(
    "It took a time of " +
      (i2 - i1) +
      " miliseconds to perform the calculations"
  );
}
findNemo(hashira);
