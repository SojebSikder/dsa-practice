#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c, int k)
{
    int position = 0, energie = 100;
    do
    {
        position = (position + k) % c.size();
        energie -= 1 + c[position] * 2;
    } while (position != 0);
    return energie;
}

int main()
{
    vector<int> c = {0, 0, 1, 0, 0, 1, 1, 0};
    int k = 2;

    int result;

    result = jumpingOnClouds(c, k);

    cout << result << endl; // 92

    return 0;
}