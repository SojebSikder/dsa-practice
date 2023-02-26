#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int j = 0;

        for (int i = 0; i < t.size() && j < s.size(); i++)
        {
            if (s[j] == t[i])
            {
                j++;
            }
        }
        return (j == s.size());
    }
};

int main()
{
    string s = "abc";
    string t = "ahbgdc";
    // string s = "axc";
    // string t = "ahbgdc";

    bool result;

    result = (new Solution())->isSubsequence(s, t);

    cout << result << endl; // true

    return 0;
}