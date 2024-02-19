#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;

    int a = 0;
    int b = 0;

    for (int i = 0; i < 5; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    if (a > b)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
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