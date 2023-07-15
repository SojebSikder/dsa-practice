#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);

    cout << 4 - s.size() << endl;
}

int main()
{
    solve();

    return 0;
}