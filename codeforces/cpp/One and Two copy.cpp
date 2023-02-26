// not passed all cases

#include <bits/stdc++.h>

using namespace std;

int minNumber(vector<int> arr)
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

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> numbers;
    for (int i = 0; i < arr.size(); i++)
    {
        if (1 <= arr[i] && arr[i] < i - 1)
        {
            numbers.push_back(arr[i]);
        }
    }

    if (numbers.size() > 0)
    {
        cout << minNumber(numbers) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}