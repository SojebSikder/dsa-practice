#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        string res;
        int opened = 0;
        for (char c : s)
        {
            if (c == '(' && opened++ > 0)
                res += c;
            if (c == ')' && opened-- > 1)
                res += c;
        }
        return res;
    }
};

int main()
{
    string s = "(()())(())";

    string result;

    result = (new Solution())->removeOuterParentheses(s);

    cout << result << endl;

    return 0;
}
