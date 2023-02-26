#include <stdio.h>

void bonAppetit(int bill_count, int *bill, int k, int b)
{
    int sum = 0;
    for (int i = 0; i < bill_count; i++)
    {
        sum += bill[i];
    }
    sum = (sum - bill[k]) / 2;
    if (sum == b)
    {
        printf("Bon Appetit\n");
    }
    else
    {
        printf("%d\n", b - sum);
    }
}

int main()
{
    int bill_count = 4, bill[] = {3, 10, 2, 9}, k = 1, b = 12;

    bonAppetit(bill_count, bill, k, b); // 5

    return 0;
}