#include <bits/stdc++.h>

using namespace std;

// int equalizeArray(vector<int> arr)
// {
//     map<int, int> m;
//     int count = 0;
//     for (int i : arr)
//         m.find(i) != m.end() ? m[i] += 1 : m[i] = 1;
//     map<int, int>::iterator it = m.begin();
//     for (; it != m.end(); it++)
//         count < it->second ? count = it->second : NULL;
//     return arr.size() - count;
// }
int maxNumber(vector<int> arr)
{
    int tmp = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (tmp < arr[i])
        {
            tmp = arr[i];
        }
    }
    return tmp;
}
int equalizeArray(vector<int> arr)
{
    // duplicate values count store here
    unordered_map<int, int> pairs;

    for (int i = 0; i < arr.size(); i++)
    {
        pairs[arr[i]]++;
    }

    // convert unordered_map to vector for calculating max number
    vector<int> uniqueValues;

    for (int i = 0; i < pairs.size(); i++)
    {
        uniqueValues.push_back(pairs[i]);
    }

    // store unique values
    set<int> common;

    for (int i = 0; i < arr.size(); i++)
    {
        common.insert(arr[i]);
    }

    int n = arr.size();
    int un = common.size();

    if (n == un)
    {
        return n - 1;
    }
    else
    {
        return (n - maxNumber(uniqueValues));
    }
}

int main()
{
    vector<int> arr = {3, 3, 2, 1, 3};

    int result;

    result = equalizeArray(arr);

    cout << result << endl; // 2

    return 0;
}