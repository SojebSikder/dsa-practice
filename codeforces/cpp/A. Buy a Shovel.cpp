#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k, r;
    cin >> k >> r;

    int i = 1;
    while (true)
    {
        if ((k * i) % 10 == 0 || (k * i - r) % 10 == 0)
        {
            cout << i << endl;
            break;
        }
        i++;
    }
}

int main()
{
    solve();

    return 0;
}
