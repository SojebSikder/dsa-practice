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

class Solution
{
public:
    TreeNode *increasingBST(TreeNode *root)
    {
        if (root == NULL)
        {
            return NULL;
        }
        TreeNode *left = increasingBST(root->left);
        TreeNode *right = increasingBST(root->right);
        root->left = NULL;
        root->right = right;
        if (left == NULL)
        {
            return root;
        }
        TreeNode *temp = left;
        while (temp->right != NULL)
        {
            temp = temp->right;
        }
        temp->right = root;
        return left;
    }
};

void inorder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    inorder(root->left);
    inorder(root->right);
}

int main()
{
    TreeNode *root = new TreeNode(5, new TreeNode(3, new TreeNode(2, new TreeNode(1), nullptr), new TreeNode(4)), new TreeNode(6, nullptr, new TreeNode(8, new TreeNode(7), new TreeNode(9))));

    TreeNode *result;

    result = (new Solution())->increasingBST(root);

    inorder(result);
    return 0;
}