#include <stdio.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int *apples, int oranges_count, int *oranges)
{
    int apple = 0, orange = 0;
    for (int i = 0; i < apples_count; i++)
    {
        if (apples[i] + a >= s && apples[i] + a <= t)
        {
            apple++;
        }
    }
    for (int i = 0; i < oranges_count; i++)
    {
        if (oranges[i] + b >= s && oranges[i] + b <= t)
        {
            orange++;
        }
    }

    printf("%d\n", apple);
    printf("%d", orange);
}

int main()
{
    int s, t, a, b, apples_count, *apple, oranges_count, *oranges;
    countApplesAndOranges(s, t, a, b, apples_count, apple, oranges_count, oranges);
}
