#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> m;

        for (auto i : strs)
        {
            string temp = i;
            sort(temp.begin(), temp.end());
            m[temp].push_back(i);
        }

        for (auto i : m)
        {
            result.push_back(i.second);
        }

        return result;
    }
};

int main()
{

    vector<vector<string>> result;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    result = Solution().groupAnagrams(strs);

    for (auto i : result)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}