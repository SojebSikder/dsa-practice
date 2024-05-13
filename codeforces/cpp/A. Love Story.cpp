#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    string s2 = "codeforces";

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s2[i])
        {
            count++;
        }
    }

    cout << count << endl;
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