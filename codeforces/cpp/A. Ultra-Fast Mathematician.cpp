#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n1;
    string n2;

    cin >> n1;
    cin >> n2;

    string ans;
    for (int i = 0; i < n1.size(); i++)
    {
        if (n1[i] != n2[i])
        {
            ans += "1";
        }
        else
        {
            ans += "0";
        }
    }

    cout << ans << endl;
}

int main()
{

    solve();

    return 0;
}