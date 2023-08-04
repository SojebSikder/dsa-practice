#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int cnt = 0;
    while (n)
    {
        int x = n % 10;
        if (x)
        {
            v.push_back(x * pow(10, cnt));
        }
        n /= 10;
        cnt++;
    }
    cout << v.size() << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
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