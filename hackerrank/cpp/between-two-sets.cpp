#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int getTotalX(int a_count, int *a, int b_count, int *b)
{
    int l = 1, g = 0;
    for (int i = 0; i < a_count; i++)
    {
        l = lcm(l, a[i]);
    }
    for (int i = 0; i < b_count; i++)
    {
        g = gcd(g, b[i]);
    }
    int res = 0;
    for (int c = l; c <= g; c += l)
        if (g % c == 0)
            res++;

    return res;
}

int main()
{
    int a_count = 2;
    int a[] = {2, 4};
    int b_count = 3;
    int b[] = {16, 32, 96};
    int value;

    value = getTotalX(a_count, a, b_count, b);
    printf("%d", value);
    return 0;
}
