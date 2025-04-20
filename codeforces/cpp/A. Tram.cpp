#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    int max = 0;
    int total = 0;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        total += y - x;

        if (max < total)
        {
            max = total;
        }
    }

    cout << max << endl;

    return 0;
}