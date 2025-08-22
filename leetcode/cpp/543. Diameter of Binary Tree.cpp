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
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        dfs(root, diameter);
        return diameter;
    }

    int dfs(TreeNode *node, int &diameter)
    {
        if (!node)
        {
            return 0;
        }

        int left = dfs(node->left, diameter);
        int right = dfs(node->right, diameter);

        diameter = max(diameter, left + right);

        return 1 + max(left, right);
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    int result = Solution().diameterOfBinaryTree(root);

    cout << result << endl;

    return 0;
}