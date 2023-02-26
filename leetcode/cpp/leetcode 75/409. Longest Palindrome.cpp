#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int longestPalindrome(string s)
    {
        int oddCount = 0;
        unordered_map<char, int> ump;

        for (char ch : s)
        {
            ump[ch]++;
            if (ump[ch] % 2 == 1)
            {
                oddCount++;
            }
            else
            {
                oddCount--;
            }
        }
        if (oddCount > 1)
        {
            return s.length() - oddCount + 1;
        }
        return s.length();
    }
};

int main()
{
    string s = "abccccdd";

    int result;

    result = (new Solution())->longestPalindrome(s);

    cout << result << endl; // 7

    return 0;
}