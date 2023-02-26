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
    ll n;
    cin >> n;
    ll total = 0;
    ll aliceA = 0, aliceB = 0, bobA = 0, bobB = 0;
    ll index = -1;

    ll i = 0, al = 0, bl = 0;
    ll currentCard = 0, currentCC = 0;
    while (total <= n)
    {
        total += v[i];
        if (total > n)
        {
            if (i % 2 == 0)
                al = 1;
            else
                bl = 1;
            index = i;
            currentCC = currentCard;
        }

        if (i % 2 == 0)
        {

            if (currentCard == 0)
            {
                if (v[i] % 2 != 0)
                {
                    aliceA += v[i] / 2 + 1;
                    aliceB += v[i] / 2;
                    currentCard = 1;
                }
                else
                {
                    aliceA += v[i] / 2;
                    aliceB += v[i] / 2;
                }
            }
            else
            {
                if (v[i] % 2 != 0)
                {
                    aliceB += v[i] / 2 + 1;
                    aliceA += v[i] / 2;
                    currentCard = 0;
                }
                else
                {
                    aliceA += v[i] / 2;
                    aliceB += v[i] / 2;
                }
            }
        }
        else
        {

            if (currentCard == 0)
            {
                if (v[i] % 2 != 0)
                {
                    bobA += v[i] / 2 + 1;
                    bobB += v[i] / 2;
                    currentCard = 1;
                }
                else
                {
                    bobA += v[i] / 2;
                    bobB += v[i] / 2;
                }
            }
            else
            {
                if (v[i] % 2)
                {
                    bobB += v[i] / 2 + 1;
                    bobA += v[i] / 2;
                    currentCard = 0;
                }
                else
                {
                    bobA += v[i] / 2;
                    bobB += v[i] / 2;
                }
            }
        }
        i++;
    }
    i = index;
    if (total > n)
    {

        ll dif = total - n;
        dif = v[i] - dif;
        if (al)
        {

            if (currentCC == 0)
            {

                if (v[i] % 2 != 0)
                {
                    aliceA = aliceA - (v[i] / 2 + 1);
                    aliceB -= v[i] / 2;
                }
                else
                {
                    aliceA -= v[i] / 2;
                    aliceB -= v[i] / 2;
                }
                if (dif % 2)
                {
                    aliceA += dif / 2 + 1;
                    aliceB += dif / 2;
                }
                else
                {
                    aliceA += dif / 2;
                    aliceB += dif / 2;
                }
            }
            else
            {
                if (v[i] % 2)
                {
                    aliceB -= (v[i] / 2 + 1);
                    aliceA -= v[i] / 2;
                }
                else
                {
                    aliceA -= v[i] / 2;
                    aliceB -= v[i] / 2;
                }
                if (dif % 2)
                {
                    aliceB += dif / 2 + 1;
                    aliceA += dif / 2;
                }
                else
                {
                    aliceA += dif / 2;
                    aliceB += dif / 2;
                }
            }
        }
        else
        {
            if (currentCC == 0)
            {
                if (v[i] % 2)
                {
                    bobA -= v[i] / 2 + 1;
                    bobB -= v[i] / 2;
                }
                else
                {
                    bobA -= v[i] / 2;
                    bobB -= v[i] / 2;
                }
                if (dif % 2)
                {
                    bobA += dif / 2 + 1;
                    bobB += dif / 2;
                }
                else
                {
                    bobA += dif / 2;
                    bobB += dif / 2;
                }
            }
            else
            {
                if (v[i] % 2)
                {
                    bobB -= v[i] / 2 + 1;
                    bobA -= v[i] / 2;
                }
                else
                {
                    bobA -= v[i] / 2;
                    bobB -= v[i] / 2;
                }
                if (dif % 2)
                {
                    bobB += dif / 2 + 1;
                    bobA += dif / 2;
                }
                else
                {
                    bobA += dif / 2;
                    bobB += dif / 2;
                }
            }
        }
    }
    cout << aliceA << " " << aliceB << " " << bobA << " " << bobB << endl;
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