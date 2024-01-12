#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    stack<char> st;
    vector<string> result;

    vector<string> generateParenthesis(int n)
    {
        generateParenthesisHelper(n, 0, 0, "");
        return result;
    }

    void generateParenthesisHelper(int n, int open, int close, string s)
    {
        if (open == n && close == n)
        {
            result.push_back(s);
            return;
        }

        if (open < n)
        {
            generateParenthesisHelper(n, open + 1, close, s + "(");
        }

        if (close < open)
        {
            generateParenthesisHelper(n, open, close + 1, s + ")");
        }
    }
};

int main()
{

    int n = 3;
    vector<string> result = Solution().generateParenthesis(n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}