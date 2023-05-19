#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string n;
    cin >> n;

    unordered_set<char> characters;

    for (int i = 0; i < n.size(); i++)
    {
        characters.insert(n[i]);
    }

    if (characters.size() % 2 == 0)
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