#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    int ans = -1;
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end());

    int naive = keyboards[0] + drives[0];
    if (naive <= b)
    {
        ans = naive;
    }
    else
    {
        return ans;
    }

    int max_till = naive;
    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            int temp = keyboards[i] + drives[j];
            if (temp > b)
            {
                break;
            }
            max_till = max(max_till, temp);
        }
    }
    ans = max_till;
    return ans;
}

int main()
{
    vector<int> keyboards = {3, 1};
    vector<int> drives = {5, 2, 8};
    int b = 10;

    int result;

    result = getMoneySpent(keyboards, drives, b); // 9

    cout << result << endl;

    return 0;
}