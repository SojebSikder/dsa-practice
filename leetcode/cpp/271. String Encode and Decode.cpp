#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string encoded = "";

        int n = strs.size();

        for (int i = 0; i < n; i++)
        {
            encoded += to_string(strs[i].size()) + "#" + strs[i];
        }

        return encoded;
    }

    vector<string> decode(string s)
    {
        vector<string> decoded;

        int n = s.size();

        int i = 0;

        while (i < n)
        {
            int j = i;

            while (s[j] != '#')
            {
                j++;
            }

            int len = stoi(s.substr(i, j - i));

            decoded.push_back(s.substr(j + 1, len));

            i = j + len + 1;
        }

        return decoded;
    }
};

int main()
{
    Solution s;
    // vector<string> strs = {"abc", "def", "ghi"};
    vector<string> strs = {"@#$", "%^&*", "!@#$%^&*"};

    string encoded = s.encode(strs);

    cout << encoded << endl;

    vector<string> decoded = s.decode(encoded);

    for (int i = 0; i < decoded.size(); i++)
    {
        cout << decoded[i] << endl;
    }

    return 0;
}