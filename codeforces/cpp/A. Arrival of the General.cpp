#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int max = 0, min = 101, maxIndex = 0, minIndex = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i;
        }
        if (a[i] <= min)
        {
            min = a[i];
            minIndex = i;
        }
    }
    int ans = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex)
        ans--;
    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}