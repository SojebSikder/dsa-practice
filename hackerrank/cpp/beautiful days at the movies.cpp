#include <bits/stdc++.h>

using namespace std;

int reverseNumber(int n)
{
    int reversed_number = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    return reversed_number;
}

int beautifulDays(int i, int j, int k)
{
    int ans = 0;

    for (int in = i; in <= j; in++)
    {
        if (abs(in - reverseNumber(in)) % k == 0)
        {
            ans++;
        }
    }

    return ans;
}

int main()
{
    int i = 13, j = 45, k = 3;

    int result;

    result = beautifulDays(i, j, k);
    cout << result << endl; // 33
    return 0;
}