#include <bits/stdc++.h>

using namespace std;

vector<int> a;
vector<bool> s;
int n = 524287;

void round()
{
    s.push_back(0);
    s.push_back(0);
    for (int i = 2; i <= n; i++)
        (i % 2 == 0) && (i > 2) ? s.push_back(0) : ((i % 3 == 0) && (i > 3)) ? s.push_back(0)
                                                                             : s.push_back(1);
    for (int i = 5; i * i <= n; i += 2)
    {
        if (s[i] == 1)
        {
            for (int j = i * i; j <= n; j += 2)
            {
                if (s[j] == 0)
                {
                    continue;
                }
                else if (j % i == 0)
                {
                    s[j] = 0;
                }
            }
        }
    }
    a.push_back(2);
    a.push_back(3);
    for (int i = 5; i <= 19; i += 2)
    {
        int x = pow(2, i) - 1;
        if ((s[x] == 1))
        {
            a.push_back(i);
        }
    }
    a.push_back(31);
    a.push_back(61);
    a.push_back(89);
    a.push_back(107);
    a.push_back(127);
    a.push_back(521);
    a.push_back(607);
    a.push_back(1279);
    a.push_back(2203);
    a.push_back(2281);
    a.push_back(3217);
    a.push_back(4253);
    a.push_back(4423);
    a.push_back(9689);
    a.push_back(9941);
    a.push_back(11213);
    a.push_back(19937);
    a.push_back(21701);
    a.push_back(23209);
    a.push_back(44497);
    a.push_back(86243);
    a.push_back(110503);
    a.push_back(132049);
    a.push_back(216091);
    a.push_back(756839);
    a.push_back(859433);
    a.push_back(1257787);
    a.push_back(1398269);
    a.push_back(2976221);
    a.push_back(3021377);
    a.push_back(6972593);
}
int main()
{
    round();
    int t;
    cin >> t;
    while (t--)
    {
        int f;
        cin >> f;
        cout << a[f - 1] << '\n';
    }
}