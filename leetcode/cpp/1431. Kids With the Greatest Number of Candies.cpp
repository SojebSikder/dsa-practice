#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> result;

        int max = *max_element(candies.begin(), candies.end());

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= max)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }

        return result;
    }
};

int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};

    int extraCandies = 3;

    vector<bool> result;

    result = (new Solution())->kidsWithCandies(candies, extraCandies);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}