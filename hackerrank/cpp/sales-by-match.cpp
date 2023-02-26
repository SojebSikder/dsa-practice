#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar)
{
    int pair = 0;
    unordered_map<int, int> pairs;

    for (int i = 0; i < n; i++)
    {
        pairs[ar[i]]++;
    }

    for (int i = 0; i < pairs.size(); i++)
    {
        pair += (pairs[i] / 2);
    }

    return pair;
}

int main()
{
    int n = 7;
    vector<int> ar = {1, 2, 1, 2, 1, 3, 2};

    int result;

    result = sockMerchant(n, ar);

    cout << result << endl;

    return 0;
}