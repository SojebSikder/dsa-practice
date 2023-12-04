#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int left = 0;  // buy
        int right = 1; // sell
        int max_profit = 0;

        while (right < prices.size())
        {
            int currentProfit = prices[right] - prices[left]; // our current profit

            if (prices[left] < prices[right])
            {
                max_profit = max(currentProfit, max_profit);
            }
            else
            {
                left = right;
            }
            right += 1;
        }
        return max_profit;
    }
};

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result;

    result = (new Solution())->maxProfit(prices);

    cout << result << endl; // 5

    return 0;
}