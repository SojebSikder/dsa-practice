#include <bits/stdc++.h>

using namespace std;

vector<int> multiply(vector<int> &v, int n)
{
    vector<int> res;
    int carry = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int prod = n * v[i] + carry;

        // push the last digit
        res.push_back(prod % 10);
        // carry
        carry = prod / 10;
    }

    while (carry)
    {
        res.push_back(carry % 10);
        carry = carry / 10;
    }

    return res;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> v;
    // 1! = 1
    v.push_back(1);

    for (int i = 2; i <= n; i++)
    {
        v = multiply(v, i);
    }

    // print the last 4 digits
    if (n >= 7)
    {
        for (int i = 3; i >= 0; i--)
        {
            cout << v[i];
        }
    }
    else
    {
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i];
        }
    }

    cout << endl;
}

int main()
{

    solve();

    return 0;
}