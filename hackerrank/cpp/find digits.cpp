#include <bits/stdc++.h>

using namespace std;

int findDigits(int n)
{
    int cpy = n;
    int count = 0;
    while (n > 0)
    {
        int val = n % 10;
        if (val != 0 && cpy % val == 0)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main()
{
    int n = 1012;

    int result;

    result = findDigits(n);

    cout << result << endl; // 3

    return 0;
}