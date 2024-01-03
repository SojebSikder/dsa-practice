#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if ((v[i] % 2 and v[i + 1] % 2) or (v[i] % 2 == 0 and v[i + 1] % 2 == 0))
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}