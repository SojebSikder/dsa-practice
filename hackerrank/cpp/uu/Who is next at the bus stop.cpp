#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    cin >> x;

    map<string, string> passangers;

    for (int i = 0; i < n; i++)
    {
        string name;
        string status;

        cin >> name >> status;

        passangers[name] = status;
    }

    return 0;
}