#include <iostream>
#include <vector>

using namespace std;

int countNonBeautifulSubarrays(vector<int> &A)
{
    int n = A.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sameCount = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] == A[i])
            {
                sameCount++;
            }
            else
            {
                break;
            }
        }
        count += (sameCount * (sameCount + 1)) / 2;
        i += sameCount - 1;
    }

    int res = n * (n + 1) / 2 - count;

    return res;
}

void solve()
{
    int t;
    cin >> t;

    int step = 1;
    while (t--)
    {

        int n;
        cin >> n;

        vector<int> A(n);

        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int result = countNonBeautifulSubarrays(A);
        cout << "Case " << step << ": " << result << endl;
        step++;
    }
}

int main()
{
    solve();

    return 0;
}