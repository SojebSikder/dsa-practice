#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 5, col = 5;
    int arr[row][col];

    int rowPos, colPos;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[row][col];
            if (arr[row][col] == 1)
            {
                rowPos = i;
                colPos = j;
            }
        }
    }

    int ans = 0;

    int midRow = row / 2;
    int midCol = col / 2;

    ans = abs(rowPos - midRow) + abs(colPos - midCol);

    cout << ans << endl;
}

int main()
{
    solve();

    return 0;
}