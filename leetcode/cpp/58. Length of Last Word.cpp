#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int lWord = s.size();
        int output = 0;
        bool foundWord = false;

        for (int i = lWord - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                foundWord = true;
                output++;
                continue;
            }
            else if (foundWord)
            {
                break;
            }
        }
        return output;
    }
};

int main()
{

    string s = "Hello World";

    int result;

    result = (new Solution())->lengthOfLastWord(s);

    cout << result << endl; // 5
    return 0;
}