#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    int a = 0, d = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
        {
            d++;
        }
    }

    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
}

int main()
{
    solve();

    return 0;
}