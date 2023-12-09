#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int count = 0;
        int size = flowerbed.size();
        for (int i = 0; i < size; i++)
        {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0))
            {
                flowerbed[i] = 1;
                count++;
            }
        }
        return count >= n;
    }
};

int main()
{

    bool result;
    vector<int> flowerbed = {1, 0, 0, 0, 1};

    result = Solution().canPlaceFlowers(flowerbed, 2);

    cout << result << endl;

    return 0;
}