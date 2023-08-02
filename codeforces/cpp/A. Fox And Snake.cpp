#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int right = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if (right == 0)
            {
                for (int j = 1; j <= m; j++)
                {

                    if (j == 1)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                    right = 1;
                }
            }
            else
            {
                for (int j = 1; j <= m; j++)
                {

                    if (j == m)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                    right = 0;
                }
            }

            cout << endl;
        }
    }
}

int main()
{
    solve();

    return 0;
}