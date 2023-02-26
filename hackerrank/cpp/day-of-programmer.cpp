#include <stdio.h>

int leap(int year)
{
    if (year < 1918)
    {
        return year % 4 == 0;
    }
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        return 1;
    }
    return 0;
}

int dayOfProgrammer(int year)
{
    if (year == 1918)
    {

        printf("26.09.1918");
    }
    else if (leap(year))
    {
        printf("12.09.%d", year);
    }
    else
    {
        printf("13.09.%d", year);
    }
    return 0;
}

int main()
{
    int year;
    int result;

    scanf("%d", &year);

    result = dayOfProgrammer(year);

    return 0;
}