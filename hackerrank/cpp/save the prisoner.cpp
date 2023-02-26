#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(int n, int m, int s)
{
    int c = (m % n) + s - 1;
    if (c > n)
    {
        c -= n;
    }
    if (c == 0)
    {
        return n;
    }
    return c;
}

int main()
{
    int n = 5, m = 2, s = 1;

    int result;

    result = saveThePrisoner(n, m, s);
    cout << result << endl; // 2

    return 0;
}