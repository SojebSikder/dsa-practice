#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    int s = 0, d = 0; // sereja and dima
    int i = 0, j = n - 1; // i and j are the indices of the array
    bool flag = true; // flag is used to check whose turn it is
    while (i <= j)
    {
        if (flag)
        {
            if (a[i] > a[j])
            {
                s += a[i];
                i++;
            }
            else
            {
                s += a[j];
                j--;
            }
        }
        else
        {
            if (a[i] > a[j])
            {
                d += a[i];
                i++;
            }
            else
            {
                d += a[j];
                j--;
            }
        }
        flag = !flag;
    }
    cout << s << " " << d << endl;
}

int main()
{
    solve();

    return 0;
}