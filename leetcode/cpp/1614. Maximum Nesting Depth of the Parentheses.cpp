#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int max = 0;
        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                count++;
            }
            else if (s[i] == ')')
            {
                count--;
            }

            if (count > max)
            {
                max = count;
            }
        }

        return max;
    }
};

int main()
{
    string s = "(1+(2*3)+((8)/4))+1";

    int result;

    result = (new Solution())->maxDepth(s);

    cout << result << endl;

    return 0;
}
