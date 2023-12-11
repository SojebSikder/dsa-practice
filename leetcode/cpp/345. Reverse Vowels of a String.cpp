#include <bits/stdc++.h>

using namespace std;

int isVowel(char c)
{
    if (c == 'a' || c == 'A')
        return 1;
    if (c == 'e' || c == 'E')
        return 1;
    if (c == 'i' || c == 'I')
        return 1;
    if (c == 'o' || c == 'O')
        return 1;
    if (c == 'u' || c == 'U')
        return 1;
    return 0;
}

class Solution
{
public:
    string reverseVowels(string s)
    {
        vector<int> vowelIndex;
        vector<char> vowel;

        for (int i = 0; i < s.size(); i++)
        {
            if (isVowel(s[i]))
            {
                vowelIndex.push_back(i);
                vowel.push_back(s[i]);
            }
        }

        reverse(vowel.begin(), vowel.end());

        for (int i = 0; i < vowelIndex.size(); i++)
        {
            s[vowelIndex[i]] = vowel[i];
        }

        return s;
    }
};

int main()
{

    string result;
    result = Solution().reverseVowels("leetcode");

    cout << result << endl;

    return 0;
}