#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    string n;
    cin >> n;

    string target = "hello";

    int j = 0;
    for (char c : n)
    {
        if (c == target[j])
        {
            j++;
            if (j == target.size())
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
    solve();

    return 0;
}