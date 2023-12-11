#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string result = "";
        string temp = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                if (temp != "")
                {
                    result = temp + " " + result;
                    temp = "";
                }
            }
            else
            {
                temp += s[i];
            }
        }
        if (temp != "")
        {
            result = temp + " " + result;
        }
        if (result.length() > 0)
        {
            result.pop_back();
        }
        return result;
    }
};

int main()
{

    string result;

    result = Solution().reverseWords("the sky is blue");

    cout << result << endl;

    return 0;
}