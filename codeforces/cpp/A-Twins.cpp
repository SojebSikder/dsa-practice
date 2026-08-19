#include <bits/stdc++.h>

using namespace std;
#define ll long long

int solve()
{
    int n;
    cin >> n;

    vector<int> coins(n);
    int total_sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        total_sum += coins[i];
    }

    // sort coins in descending order
    sort(coins.rbegin(), coins.rend());

    int my_sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        my_sum += coins[i];
        count++;
        if (my_sum > total_sum - my_sum)
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}

int main()
{
    solve();

    return 0;
}