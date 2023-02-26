#include <bits/stdc++.h>

using namespace std;

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles)
{
    int ans = 0;

    if (k > 0)
    {
    }
    else
    {
        ans += (n - 1) * (n - 1);
    }

    return ans;
}

int main()
{

    // int n = 5, k = 3, r_q = 4, c_q = 3;
    // vector<vector<int>> obstacles{{5, 5}, {4, 2}, {2, 3}};
    int n = 4, k = 0, r_q = 4, c_q = 4;
    vector<vector<int>> obstacles;

    int result;

    result = queensAttack(n, k, r_q, c_q, obstacles);

    cout << result << endl; // 10

    return 0;
}