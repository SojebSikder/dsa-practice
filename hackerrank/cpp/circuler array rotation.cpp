#include <bits/stdc++.h>

using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    vector<int> newArray(a.size()), result;

    for (int i = 0; i < a.size(); i++)
    {
        newArray[(i + k) % a.size()] = a[i];
    }

    for (int i = 0; i < queries.size(); i++)
    {
        result.push_back(newArray[queries[i]]);
    }

    return result;
}

int main()
{
    vector<int> a = {1, 2, 3};
    int k = 2;
    vector<int> queries = {0, 1, 2};

    vector<int> result;

    result = circularArrayRotation(a, k, queries);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl; // 2,3,1
    }

    return 0;
}