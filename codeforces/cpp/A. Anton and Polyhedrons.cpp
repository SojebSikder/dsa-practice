#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s == "Tetrahedron")
        {
            ans += 4;
        }
        else if (s == "Cube")
        {
            ans += 6;
        }
        else if (s == "Octahedron")
        {
            ans += 8;
        }
        else if (s == "Dodecahedron")
        {
            ans += 12;
        }
        else if (s == "Icosahedron")
        {
            ans += 20;
        }
    }

    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}