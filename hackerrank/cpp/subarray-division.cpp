#include <stdio.h>

int birthday(int s_count, int *s, int d, int m)
{
    int partsOfChocolate = 0;
    for (int i = 0; i < s_count - (m - 1); i++)
    {
        int subArraySum = 0;
        for (int j = i; j < i + m; j++)
        {
            subArraySum += s[j];
        }
        if (subArraySum == d)
        {
            partsOfChocolate++;
        }
    }
    return partsOfChocolate;
}
