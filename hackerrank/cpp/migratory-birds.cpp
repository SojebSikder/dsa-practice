#include <stdio.h>

int migratoryBirds(int arr_count, int *arr)
{
    int freq[6] = {0};

    for (int i = 0; i < arr_count; i++)
    {
        freq[arr[i]]++;
    }

    int max = freq[0];
    int max_number = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
            max_number = i;
        }
    }
    return max_number;
}

int main()
{
    int arr_count = 6, arr[] = {1, 4, 4, 4, 5, 3};
    int result;

    result = migratoryBirds(arr_count, arr);
    printf("%d", result); // 4

    return 0;
}
