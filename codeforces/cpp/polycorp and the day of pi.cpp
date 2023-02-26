#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    string n;
    cin >> n;
    string pi = "314159265358979323846264338327";
    int count = 0;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == pi[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}