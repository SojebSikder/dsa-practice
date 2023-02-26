// not working

#include <bits/stdc++.h>

using namespace std;

// add digit. e.g. 123 = 6
int addDigit(int n)
{
    // declare variable
    int sum = 0, remainder;

    // logic
    while (n != 0)
    {
        remainder = n % 10;
        sum += remainder;
        n = n / 10;
    }

    // output
    return sum;
}

void solve()
{
    // take input
    int n;
    cin >> n;

    int x = n / 2;
    int y = n - x;
    int s1 = addDigit(x);
    int s2 = addDigit(y);

    if (abs(s1 - s2) > 1)
    {
        if (s1 < s2)
        {
            x--;
        }
        else
        {
            y--;
        }
    }
    cout << x << " " << y << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}