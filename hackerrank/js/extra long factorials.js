function extraLongFactorials(n) {
  let ans = 1;
  while (n > 0) {
    ans = BigInt(ans) * BigInt(n);
    n--;
  }
  console.log(ans.toString());
}
extraLongFactorials(30);
