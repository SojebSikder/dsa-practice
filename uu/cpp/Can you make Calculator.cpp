#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    
    int summation = x + y;
    int multiplication = x * y;
    int subtraction = x - y;

    cout << summation << endl;
    cout << multiplication << endl;
    cout << subtraction << endl;
}

int main()
{
    solve();

    return 0;
}