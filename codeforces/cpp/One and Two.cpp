#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int number_two = 0;

    // get input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 2)
        {
            number_two++;
        }
    }

    // logic
    if (number_two & 1)
    {
        cout << -1 << endl;
    }
    else
    {
        int current_number_two = 0;
        int k = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 2)
            {
                current_number_two++;
            }
            if (current_number_two == number_two / 2)
            {
                k = i;
                break;
            }
        }
        cout << k + 1 << endl;
    }
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