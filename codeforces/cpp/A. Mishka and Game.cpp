#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int m = 0, c = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            m++;
        else if (a < b)
            c++;
    }
    if (m > c)
        cout << "Mishka";
    else if (m < c)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
}

int main()
{
    solve();

    return 0;
}