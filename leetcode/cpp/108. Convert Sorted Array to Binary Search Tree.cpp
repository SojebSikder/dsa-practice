#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *helper(vector<int> &nums, int left, int right)
    {
        // base case
        // if the left pointer crosses right return null
        if (left > right)
        {
            return NULL;
        }

        // as middle of the array will be the root node
        int mid = left + (right - left) / 2;
        TreeNode *temp = new TreeNode(nums[mid]);

        // left part from middle will be left subtree
        temp->left = helper(nums, left, mid - 1);

        // right part of array will be right subtree
        temp->right = helper(nums, mid + 1, right);

        return temp;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return helper(nums, 0, nums.size() - 1);
    }
};

int main()
{
    vector<int> nums = {-10, -3, 0, 5, 9};

    TreeNode *result;

    result = (new Solution())->sortedArrayToBST(nums);
    cout << result << endl; //[0,-3,9,-10,null,5]
    return 0;
}
