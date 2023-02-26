#include <bits/stdc++.h>

using namespace std;

vector<int> permutationEquation(vector<int> p)
{
    vector<int> indexes(p.size() + 1), result;
    for (int i = 1; i <= p.size(); i++)
    {
        indexes[p[i - 1]] = i;
    }
    for (int i = 1; i <= p.size(); i++)
    {
        result.push_back(indexes[indexes[i]]);
    }

    return result;
}

int main()
{
    vector<int> p = {2, 3, 1};

    vector<int> result;

    result = permutationEquation(p);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl; // 2,3,1
    }

    return 0;
}