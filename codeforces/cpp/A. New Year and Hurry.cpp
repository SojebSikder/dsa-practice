#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int time = 0;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        time += 5 * i;
        if (time + k > 240)
        {
            break;
        }
        count++;
    }

    cout << count << endl;
}

int main()
{
    solve();

    return 0;
}