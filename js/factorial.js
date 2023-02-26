function fact(value) {
  var total = 1;
  
  if (value == 0 || value == 1) {
    return total;
  }

  while (value != 0) {
    total = total * value;
    value--;
  }
  return total;
}

console.log(fact(1));
