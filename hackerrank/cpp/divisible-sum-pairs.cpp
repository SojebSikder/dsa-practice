#include <stdio.h>

int divisibleSumPairs(int n, int k, int ar_count, int *ar)
{
    int count = 0;
    for (int j = 0; j < ar_count - 1; j++)
    {
        for (int i = j + 1; i < ar_count; i++)
        {
            if (((ar[i] + ar[j]) % k) == 0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n, k = 5, ar_count = 5, ar[] = {1, 2, 3, 4, 5, 6};
    int result;

    result = divisibleSumPairs(n, k, ar_count, ar);
    printf("%d", result);

    return 0;
}
