#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        
    }
};

int main()
{

    bool result;

    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.', '.'},

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