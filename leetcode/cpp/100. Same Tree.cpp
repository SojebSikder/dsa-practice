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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        // p and q are both null
        if (p == NULL && q == NULL)
            return true;
        // one of p and q is null
        if (q == NULL || p == NULL)
            return false;
        if (p->val != q->val)
            return false;
        return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);
    }
};

int main()
{
    TreeNode *root_p = new TreeNode(1);
    root_p->right = new TreeNode(2);
    root_p->right->left = new TreeNode(3);

    TreeNode *root_q = new TreeNode(1);
    root_q->right = new TreeNode(2);
    root_q->right->left = new TreeNode(3);

    bool result;

    result = (new Solution())->isSameTree(root_p, root_q);

    cout << result << endl; // 1

    return 0;
}