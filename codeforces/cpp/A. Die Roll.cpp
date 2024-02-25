#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int y, w;
    cin >> y >> w;

    int max = y > w ? y : w;
    int prob = 6 - max + 1;

    if (prob == 6)
    {
        cout << "1/1" << endl;
    }
    else if (prob == 3)
    {
        cout << "1/2" << endl;
    }
    else if (prob == 2)
    {
        cout << "1/3" << endl;
    }
    else if (prob == 1)
    {
        cout << "1/6" << endl;
    }
    else if (prob == 4)
    {
        cout << "2/3" << endl;
    }
    else if (prob == 5)
    {
        cout << "5/6" << endl;
    }
    else
    {
        cout << "0/1" << endl;
    }
}

int main()
{
    solve();

    return 0;
}