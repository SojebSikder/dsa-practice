#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int y;
    cin >> y;
    while (true)
    {
        y++;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y << endl;
            break;
        }
    }
}

int main()
{

    solve();

    return 0;
}