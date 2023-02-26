#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt += arr[i] % 2;
    }
    if (cnt < 3 && ((n - cnt) < 2 || cnt == 0))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        if (cnt >= 3)
        {
            int rem = 3;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 && rem)
                {
                    cout << i + 1 << ' ';
                    rem--;
                }
            }
        }
        else
        {
            int rem0 = 2, rem1 = 1;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 && rem1)
                {
                    cout << i + 1 << ' ';
                    rem1--;
                }
                else if (arr[i] % 2 == 0 && rem0)
                {
                    cout << i + 1 << ' ';
                    rem0--;
                }
            }
        }
        cout << endl;
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