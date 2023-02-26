#include <bits/stdc++.h>

using namespace std;
#define SIZE 1e6 + 2
#define ll long long

vector<int> v;
void init()
{
    v.push_back(1);
    int current = 1, i = 0;
    while (current < SIZE)
    {
        v.push_back(current + 1 + current + 2);
        i++;
        current = current + 2;
    }
}
void solve()
{
    int n;
    cin >> n;
    int total = 0;
    int alice = 0, bob = 0;
    int index = -1;

    int i = 0, cur = 1, al = 0, bl = 0;
    while (total <= n)
    {
        total += v[i];
        if (total > n)
        {
            if (i % 2 == 0)
            {
                al = 1;
            }
            else
            {
                bl = 1;
            }
            index = i;
        }
        if (i % 2 == 0)
        {
            alice += v[i];
        }
        else
        {
            bob += v[i];
        }
        i++;
    }
    if (total > n)
    {
        int dif = total - n;
        if (al)
        {
            alice -= dif;
        }
        else
        {
            bob -= dif;
        }
    }
    cout << alice << " " << bob << endl;
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}