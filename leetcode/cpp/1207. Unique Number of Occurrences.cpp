#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> m;
        unordered_set<int> s;

        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }

        for (auto i : m)
        {
            if (s.find(i.second) != s.end())
            {
                return false;
            }
            s.insert(i.second);
        }


        return true;
    }
};

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    bool result = Solution().uniqueOccurrences(arr);

    cout << result << endl;

    return 0;
}