#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    vector<int> v;
    for (int i = 0; i < s.size(); i += 2)
    {
        v.push_back(s[i] - '0');
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (i == v.size() - 1)
        {
            cout << v[i] << endl;
        }
        else
        {
            cout << v[i] << "+";
        }
    }
}

int main()
{
    solve();

    return 0;
}