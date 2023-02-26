#include <bits/stdc++.h>

using namespace std;

int formingMagicSquare(vector<vector<int>> s)
{
    int mask[8][9] = {{6, 1, 8, 7, 5, 3, 2, 9, 4},
                      {8, 1, 6, 3, 5, 7, 4, 9, 2},
                      {8, 3, 4, 1, 5, 9, 6, 7, 2},
                      {4, 3, 8, 9, 5, 1, 2, 7, 6},
                      {6, 7, 2, 1, 5, 9, 8, 3, 4},
                      {2, 7, 6, 9, 5, 1, 4, 3, 8},
                      {2, 9, 4, 7, 5, 3, 6, 1, 8},
                      {4, 9, 2, 3, 5, 7, 8, 1, 6}};
    vector<int> vt;
    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s[i].size(); j++)
        {
            vt.push_back(s[i][j]);
        }
    }
    int mx = INT_MAX;
    for (int i = 0; i < 8; i++)
    {
        ans = 0;
        for (int j = 0; j < 9; j++)
        {
            ans += abs(vt[j] - mask[i][j]);
        }
        mx = min(mx, ans);
    }

    return mx;
}

int main()
{
    vector<vector<int>> s = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 5}};

    int result;

    result = formingMagicSquare(s); // 1

    cout << result << endl;

    return 0;
}