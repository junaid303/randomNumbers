/*creating a proper random function to use for all random integer purposes.

This JavaScript function always returns a random number between min (included) and max (excluded)*/

function getRndInteger(min, max) {
    return Math.floor(Math.random() * (max - min) ) + min;
    
  }
  console.log(getRndInteger(2,10));