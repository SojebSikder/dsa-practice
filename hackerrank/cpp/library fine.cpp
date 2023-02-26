#include <bits/stdc++.h>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 < y2)
    {
        return 0;
    }
    else if (y1 == y2)
    {
        if (m1 < m2)
        {
            return 0;
        }
        else if (m1 == m2)
        {
            if (d1 <= d2)
            {
                return 0;
            }
            else
            {
                return 15 * (d1 - d2);
            }
        }
        else
        {
            return 500 * (m1 - m2);
        }
    }
    else
    {
        return 10000;
    }
}

int main()
{
    int d1 = 9, m1 = 6, y1 = 2015, d2 = 6, m2 = 6, y2 = 2015;

    int result;

    result = libraryFine(d1, m1, y1, d2, m2, y2); // 45

    cout << result << endl;

    return 0;
}