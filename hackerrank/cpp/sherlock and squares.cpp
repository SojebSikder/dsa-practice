#include <bits/stdc++.h>

using namespace std;

int squares(int a, int b)
{
    int ans = 0;

    ans = floor(sqrt(b)) - floor(sqrt(a - 1));

    return ans;
}

int main()
{
    int a = 17, b = 24;

    int result;

    result = squares(a, b);

    cout << result << endl; // 0

    return 0;
}