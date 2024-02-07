#include <bits/stdc++.h>

using namespace std;

// Definition for a binary tree node.
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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> result;
        if (root == NULL)
        {
            return result;
        }
        if (root->left == NULL && root->right == NULL)
        {
            result.push_back(to_string(root->val));
            return result;
        }
        vector<string> left = binaryTreePaths(root->left);
        vector<string> right = binaryTreePaths(root->right);
        for (string s : left)
        {
            result.push_back(to_string(root->val) + "->" + s);
        }
        for (string s : right)
        {
            result.push_back(to_string(root->val) + "->" + s);
        }
        return result;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);

    vector<string> result = Solution().binaryTreePaths(root);

    for (string s : result)
    {
        cout << s << endl;
    }

    return 0;
}