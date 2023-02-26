#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    char n;
    cin >> n;

    string text = "codeforces";
    string ans = "No";

    for (int i = 0; i < text.size(); i++)
    {
        if (n == text[i])
        {
            ans = "Yes";
        }
    }
    cout << ans << endl;
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