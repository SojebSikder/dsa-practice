#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n;
    cin >> n;
    string ans = "";

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '.')
        {
            ans.append("0");
        }
        else if (n[i] == '-' && n[i + 1] == '.')
        {
            ans.append("1");
            i++;
        }
        else if (n[i] == '-' && n[i + 1] == '-')
        {
            ans.append("2");
            i++;
        }
        else if (n[i] == '-' && n[i + 1] == '\0')
        {
            ans.append("2");
            i++;
        }
        else if (n[i] == '.' && n[i + 1] == '\0')
        {
            ans.append("0");
            i++;
        }
    }

    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}