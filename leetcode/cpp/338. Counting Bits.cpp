#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> countBits(int n) {
    vector<int> ans(n + 1);

    for (int i = 0; i <= n; i++) {
      int num = i;
      int count = 0;

      while (num > 0) {
        count += num & 1; // check if the last bit is 1
        num >>= 1;        // shift right by 1 bit (same as num /= 2)
      }
      ans[i] = count;
    }

    return ans;
  }
};

int main() {

  vector<int> result = Solution().countBits(85723);

  for (int i : result) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
