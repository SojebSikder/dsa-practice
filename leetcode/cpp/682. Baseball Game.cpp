#include <bits/stdc++.h>

using namespace std;

bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 0 && s[i] == '-')
        {
            continue;
        }
        else if (s[i] < '0' || s[i] > '9')
        {
            return false;
        }
    }

    return true;
}

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> st;
        int sum = 0;

        for (int i = 0; i < operations.size(); i++)
        {
            if (isNumber(operations[i]))
            {
                st.push(stoi(operations[i]));
            }
            else if (operations[i] == "C")
            {
                st.pop();
            }
            else if (operations[i] == "D")
            {
                st.push(st.top() * 2);
            }
            else if (operations[i] == "+")
            {
                int top = st.top();
                st.pop();
                int newTop = top + st.top();
                st.push(top);
                st.push(newTop);
            }
        }

        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};

int main()
{
    vector<string> operations = {"5", "2", "C", "D", "+"};

    int result;

    result = (new Solution())->calPoints(operations);

    cout << result << endl;

    return 0;
}