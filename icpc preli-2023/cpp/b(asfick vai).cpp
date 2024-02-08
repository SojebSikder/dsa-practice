#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> a;
vector<int> b;
vector<int> c;
void go()
{
    int t;
    cin >> t;
    int r = t;
    int no = 1;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int y = x - 1;
        int sum = 0;
        int siZe = x * y;
        for (int i = 1; i <= n; i++)
        {

            int f = abs(i % x - i % y);
            sum += f;
        }
        cout << "Case " << no << ": " << sum << '\n';
        no++;
    }
}
int main()
{
    go();
}