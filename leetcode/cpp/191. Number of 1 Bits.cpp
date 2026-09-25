#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int hammingWeight(int n) {
    int count = 0;

    while (n > 0) {
      count += n % 2;
      n /= 2;
    }

    return count;
  }
};

int main() {

  int result = Solution().hammingWeight(11);

  cout << result << endl;

  return 0;
}
