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
    // vector<int> ans;
    // void inorder(TreeNode *root)
    // {
    //     if (!root)
    //         return;
    //     inorder(root->left);
    //     ans.push_back(root->val);
    //     inorder(root->right);
    // }
    vector<int> inorderTraversal(TreeNode *root)
    {
        // inorder(root);
        vector<int> ans;
        if (!root)
            return {};

        stack<TreeNode *> st;
        TreeNode *temp = root;

        while (!st.empty() or temp)
        {
            while (temp)
            {
                st.push(temp);
                temp = temp->left;
            }
            temp = st.top();
            ans.push_back(st.top()->val);
            st.pop();
            temp = temp->right;
        }

        return ans;
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result;

    result = (new Solution())->inorderTraversal(root);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl; //[1,3,2]
    }

    return 0;
}