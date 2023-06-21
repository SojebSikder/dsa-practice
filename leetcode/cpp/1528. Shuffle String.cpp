#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        string result = s;

        for (int i = 0; i < indices.size(); i++)
        {
            result[indices[i]] = s[i];
        }

        return result;
    }
};

int main()
{
    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};

    string result;

    result = (new Solution())->restoreString(s, indices);

    cout << result << endl;

    return 0;
}
