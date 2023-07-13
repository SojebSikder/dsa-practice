#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string hate = "I hate ";
    string love = "I love ";
    string that = "that ";
    string it = "it";
    string ans = "";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            ans += love;
        }
        else
        {
            ans += hate;
        }
        if (i != n)
        {
            ans += that;
        }
    }
    ans += it;
    cout << ans;
}

int main()
{

    solve();

    return 0;
}