/*creating a proper random function to use for all random integer purposes.

This JavaScript function always returns a random number between min (included) and max (excluded)*/

function getRndInteger(min, max) {
    return Math.floor(Math.random() * (max - min) ) + min;
    
  }
  console.log(getRndInteger(2,10));

  /*This JavaScript function always returns a random number between min and max (both included):
*/

function giveRndInteger(min, max) {
  return Math.floor(Math.random() * (max - min + 1) ) + min;
}
console.log(giveRndInteger(1,6));
