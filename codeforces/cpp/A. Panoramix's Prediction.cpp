#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> primes;
    for (int i = 2; i <= 50; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            primes.push_back(i);
        }
    }

    int index = -1;
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i] == n)
        {
            index = i;
            break;
        }
    }

    if (primes[index + 1] == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    solve();

    return 0;
}