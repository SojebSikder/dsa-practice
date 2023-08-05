#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
    {
        int count = 0;
        for (int i = 0; i < hours.size(); i++)
        {
            if (hours[i] >= target)
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{

    vector<int> hours = {0, 1, 2, 3, 4};
    int target = 2;

    int result;

    result = Solution().numberOfEmployeesWhoMetTarget(hours, target);

    cout << result << endl;

    return 0;
}