#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        vector<int> result;
        result.push_back(first);

        for (int i = 0; i < encoded.size(); i++)
        {
            result.push_back(result[i] ^ encoded[i]);
        }

        return result;
    }
};

int main()
{
    vector<int> encoded = {1, 2, 3};
    int first = 1;

    vector<int> result;

    result = (new Solution())->decode(encoded, first);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
