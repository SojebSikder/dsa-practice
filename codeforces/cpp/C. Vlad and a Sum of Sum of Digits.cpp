// time limit exceed
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i < 10)
        {
            sum += i;
        }
        else
        {
            int temp = i;
            int tempSum = 0;

            while (temp > 0)
            {
                tempSum += temp % 10;
                temp /= 10;
            }

            sum += tempSum;
        }
    }

    cout << sum << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    solve();

    return 0;
}