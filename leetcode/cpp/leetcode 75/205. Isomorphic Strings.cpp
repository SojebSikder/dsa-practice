#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> mapping_s_t;
        map<char, char> mapping_t_s;

        for (int i = 0; i < s.size(); i++)
        {
            char c1 = s[i];
            char c2 = t[i];

            if (!mapping_s_t[c1] && !mapping_t_s[c2])
            {
                mapping_s_t[c1] = c2;
                mapping_t_s[c2] = c1;
            }
            else if (!(mapping_s_t[c1] == c2 && mapping_t_s[c2] == c1))
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    string s = "egg";
    string t = "add";

    bool result;

    result = (new Solution())->isIsomorphic(s, t);

    cout << result << endl; // true

    return 0;
}