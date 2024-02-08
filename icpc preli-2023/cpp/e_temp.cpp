#include <stdio.h>

int is_beautiful(int arr[], int n)
{

    if (n == 0)
        return 0;

    int first = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != first)
            return 0;
    }

    return 1;
}

int count_non_beautiful(int arr[], int n)
{

    int count = 0;

    for (int size = 1; size <= n; size++)
    {

        for (int start = 0; start <= n - size; start++)
        {

            if (!is_beautiful(arr + start, size))
                count++;
        }
    }

    return count;
}

int main()
{

    int t;
    scanf("%d", &t);

    for (int c = 1; c <= t; c++)
    {

        int n;
        scanf("%d", &n);

        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("Case %d: %d\n", c, count_non_beautiful(a, n));
    }
}