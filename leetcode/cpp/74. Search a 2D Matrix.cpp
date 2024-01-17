#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            int left = 0, right = matrix[i].size() - 1;
            while (left <= right)
            {
                int mid = right + (left - right) / 2;
                if (matrix[i][mid] == target)
                {
                    return true;
                }
                else if (matrix[i][mid] < target)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
        }
        return false;
    }
    // bool searchMatrix(vector<vector<int>> &matrix, int target)
    // {
    //     int row = matrix.size(), col = matrix[0].size();
    //     int left = 0, right = row * col - 1;
    //     while (left <= right)
    //     {
    //         int mid = right + (left - right) / 2;
    //         if (matrix[mid / col][mid % col] == target)
    //         {
    //             return true;
    //         }
    //         else if (matrix[mid / col][mid % col] < target)
    //         {
    //             left = mid + 1;
    //         }
    //         else
    //         {
    //             right = mid - 1;
    //         }
    //     }
    //     return false;
    // }
};

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 60}};

    bool result = Solution().searchMatrix(matrix, 3);

    cout << result << endl;

    return 0;
}