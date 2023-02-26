#include <stdio.h>

int *breakingRecords(int scores_count, int *scores)
{
    static int count[] = {0, 0};
    int minValue = scores[0], maxValue = scores[0];

    for (int i = 0; i < scores_count; i++)
    {
        if (scores[i] > maxValue)
        {
            maxValue = scores[i];
            count[0]++;
        }
        if (scores[i] < minValue)
        {
            minValue = scores[i];
            count[1]++;
        }
    }

    return count;
}

int main()
{
    int scores_count;
    int *result;

    scanf("%d", &scores_count);
    int scores[scores_count];

    for (int i = 0; i < scores_count; i++)
    {
        scanf("%d", &scores[i]);
    }

    result = breakingRecords(scores_count, scores);
    printf("%d %d", result[0], result[1]);

    return 0;
}
