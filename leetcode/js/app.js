// leetcode: 1309. Decrypt String from Alphabet to Integer Mapping
// url: https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/
/**
 * @param {string} s
 * @return {string}
 */
var freqAlphabets = function (s) {
  const a_to_i = {
    a: 1,
    b: 2,
    c: 3,
    d: 4,
    e: 5,
    f: 6,
    g: 7,
    h: 8,
    i: 9,
  };

  const j_to_z = {
    j: "10#",
    k: "11#",
    l: "12#",
    m: "13#",
    n: "14#",
    o: "15#",
    p: "16#",
    q: "17#",
    r: "18#",
    s: "19#",
    t: "20#",
    u: "21#",
    v: "22#",
    w: "23#",
    x: "24#",
    y: "25#",
    z: "26#",
  };

  for (let i = s.length - 1; i >= 0; i--) {

  }
};

console.log(freqAlphabets("1326#"));
