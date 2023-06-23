#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string str1, str2;

    cin >> str1;
    cin >> str2;

    int ans = 0;

    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 32;
        }
        if (str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] += 32;
        }
        if (str1[i] > str2[i])
        {
            ans = 1;
            break;
        }
        else if (str1[i] < str2[i])
        {
            ans = -1;
            break;
        }
    }

    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}