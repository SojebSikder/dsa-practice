#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n, p, q;
    cin >> n >> p;
    set<int> s;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}

int main()
{
    solve();

    return 0;
}