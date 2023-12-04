#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return a == 0 ? b : gcd(b % a, a);
}

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 != str2 + str1)
            return "";

        return str1.substr(0, gcd(str1.size(), str2.size()));
    }
};

int main()
{

    string result;
    result = Solution().gcdOfStrings("ABCABC", "ABC");

    cout << result << endl;

    return 0;
}