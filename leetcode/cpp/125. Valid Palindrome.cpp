#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isalnum(char c)
    {
        if (c >= 'a' && c <= 'z')
            return true;
        if (c >= 'A' && c <= 'Z')
            return true;
        if (c >= '0' && c <= '9')
            return true;
        return false;
    }
    bool isPalindrome(string s)
    {
        string newS = "";
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            if (isalnum(s[i]))
            {
                newS += tolower(s[i]);
            }
        }

        string revS = newS;
        reverse(revS.begin(), revS.end());

        if (newS == revS)
            return true;
        else
            return false;
    }
};

int main()
{

    string s = "A man, a plan, a canal: Panama";
    int result = Solution().isPalindrome(s);

    cout << result << endl;

    return 0;
}