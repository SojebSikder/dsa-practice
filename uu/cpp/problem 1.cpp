#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr;

    int sum = 0;

    while (t--)
    {
        for (int i = 0; i < t; i++)
        {
            int v;
            cin >> v;
            arr.push_back(v);
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}