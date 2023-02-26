#include <bits/stdc++.h>

using namespace std;

int maxNumber(vector<int> arr)
{
    int tmp = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (tmp < arr[i])
        {
            tmp = arr[i];
        }
    }
    return tmp;
}

int hurdleRace(int k, vector<int> height)
{
    int ans = 0;

    ans = maxNumber(height);
    if (k >= ans)
    {
        return 0;
    }
    else
    {
        return ans - k;
    }
}

int main()
{
    int k = 4;
    vector<int> height = {1, 6, 3, 5, 2};

    int result;

    result = hurdleRace(k, height); // 2
    cout << result << endl;

    return 0;
}