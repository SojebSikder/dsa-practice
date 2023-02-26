#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c)
{
    int count = 0;

    for (int i = 1; i < c.size(); i++)
    {
        if (c[i + 1] != 1)
        {
            count++;
            i++;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> c = {0, 0, 1, 0, 0, 1, 0};

    int result;

    result = jumpingOnClouds(c);

    cout << result << endl; // 4

    return 0;
}