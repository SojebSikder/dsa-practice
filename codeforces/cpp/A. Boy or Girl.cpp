#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n;
    cin >> n;

    int count = 0;

    sort(n.begin(), n.end());

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == n[i + 1])
        {
            n.erase(i, 1);
            i--;
        }
    }

    for (int i = 0; i < n.size(); i++)
    {
        count++;
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}

int main()
{

    solve();

    return 0;
}