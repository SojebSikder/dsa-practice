#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    string n;
    cin >> n;

    for (auto c : n)
    {
        char ch = (char)tolower(c);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
        {
            continue;
        }
        else
        {
            cout << '.' << (char)tolower(c);
        }
    }
    cout << endl;
}

int main()
{
    solve();

    return 0;
}