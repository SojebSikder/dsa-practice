#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isOperator(string s)
    {
        if (s == "+" || s == "-" || s == "*" || s == "/")
            return true;
        return false;
    }
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        int n = tokens.size();
        for (int i = 0; i < n; i++)
        {
            if (isOperator(tokens[i]))
            {
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                if (tokens[i] == "+")
                    st.push(op1 + op2);
                else if (tokens[i] == "-")
                    st.push(op1 - op2);
                else if (tokens[i] == "*")
                    st.push(op1 * op2);
                else if (tokens[i] == "/")
                    st.push(op1 / op2);
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};

int main()
{

    vector<string> tokens = {"2", "1", "+", "3", "*"};
    int result = Solution().evalRPN(tokens);

    cout << result << endl;

    return 0;
}