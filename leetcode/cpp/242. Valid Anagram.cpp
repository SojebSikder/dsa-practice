#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> freq(string &s)
    {
        vector<int> ans(26, 0);
        for (char c : s)
        {
            ans[c - 'a']++;
        }
        return ans;
    }

    bool isAnagram(string s, string t)
    {
        return freq(s) == freq(t);
    }
};

int main()
{

    bool result;
    string s = "anagram";
    string t = "nagaram";

    result = Solution().isAnagram(s, t);

    cout << result << endl;

    return 0;
}