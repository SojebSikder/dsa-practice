#include <bits/stdc++.h>

using namespace std;

int countingValleys(int steps, string path)
{
    int numberOfValleys = 0;
    int seeLevel = 0;

    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'D')
        {
            seeLevel--;
            if (seeLevel == -1)
            {
                numberOfValleys++;
            }
        }
        else
        {
            seeLevel++;
        }
    }

    return numberOfValleys;
}

int main()
{
    int steps = 8;
    string path = "UDDDUDUU";

    int result;

    result = countingValleys(steps, path); // 1

    cout << result << endl;

    return 0;
}