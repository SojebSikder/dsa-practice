#include <bits/stdc++.h>

using namespace std;

vector<int> cutTheSticks(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    vector<int> result;
    result.push_back(arr.size());
    int smallest = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        int elem = arr[i] - smallest;
        if (elem > 0)
        {
            result.push_back(arr.size() - i);
            smallest += elem;
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {
        5,
        4,
        4,
        2,
        2,
        8,
    };

    vector<int> result;
    // 6
    // 4
    // 2
    // 1

    result = cutTheSticks(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}