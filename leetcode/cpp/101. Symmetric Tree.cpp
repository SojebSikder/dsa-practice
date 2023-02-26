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
    bool isTreeSymmetric(TreeNode *leftRoot, TreeNode *rightRoot)
    {
        if (leftRoot == NULL && rightRoot == NULL)
            return true;
        if (leftRoot == NULL || rightRoot == NULL)
            return false;

        if (leftRoot->val != rightRoot->val)
            return false;

        return isTreeSymmetric(leftRoot->left, rightRoot->right) && isTreeSymmetric(leftRoot->right, rightRoot->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        return isTreeSymmetric(root->left, root->right);
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);

    root->right = new TreeNode(2);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    bool result;

    result = (new Solution())->isSymmetric(root);

    cout << result << endl; // true

    return 0;
}