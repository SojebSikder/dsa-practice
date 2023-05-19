#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1, s2;

        for (char c : s)
        {
            if (c == '#' && !s1.empty())
            {
                s1.pop();
            }
            else if (c != '#')
            {
                s1.push(c);
            }
        }

        for (char c : t)
        {
            if (c == '#' && !s2.empty())
            {
                s2.pop();
            }
            else if (c != '#')
            {
                s2.push(c);
            }
        }

        return s1 == s2;
    }
};

int main()
{

    string s = "ab#c", t = "ad#c";
    // string s = "xywrrmp", t = "xywrrmu#p";
    bool result;

    result = (new Solution())->backspaceCompare(s, t);

    cout << result << endl; // true

    return 0;
}