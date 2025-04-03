#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_map<int, unordered_set<char>> rows, cols;
        map<pair<int, int>, unordered_set<char>> squares;

        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                if (board[r][c] == '.')
                    continue;

                pair<int, int> squareKey = {r / 3, c / 3};

                if (rows[r].count(board[r][c]) || cols[c].count(board[r][c]) || squares[squareKey].count(board[r][c]))
                {
                    return false;
                }

                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                squares[squareKey].insert(board[r][c]);
            }
        }
        return true;
    }
};

int main()
{
    bool result;

    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '.', '.'},

        {'9', '6', '.', '.', '7', '.', '.', '.', '.'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '.'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '.'},

        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'6', '.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'}};

    result = Solution().isValidSudoku(board);

    cout << result << endl;

    return 0;
}