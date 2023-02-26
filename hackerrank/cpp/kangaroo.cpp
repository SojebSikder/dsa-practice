#include <stdio.h>

/// @brief
/// @param x1
/// @param v1
/// @param x2
/// @param v2
/// @return
char *kangaroo(int x1, int v1, int x2, int v2)
{
    static char valueYes[] = "YES";
    static char valueNo[] = "NO";

    if (v1 - v2 > 0 && ((x2 - x1) % (v2 - v1)) == 0)
    {
        return valueYes;
    }
    else
    {
        return valueNo;
    }
}

int main()
{
    int x1 = 2, v1 = 1, x2 = 1, v2 = 2;
    char *value;

    value = kangaroo(x1, v1, x2, v2);
    printf("%s", value);
}
