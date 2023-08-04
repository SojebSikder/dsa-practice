#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int min = 0, max = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            min = a[i];
            max = a[i];
        }
        else
        {
            if (a[i] < min)
            {
                min = a[i];
                count++;
            }
            if (a[i] > max)
            {
                max = a[i];
                count++;
            }
        }
    }
    cout << count << endl;
}

int main()
{
    solve();

    return 0;
}