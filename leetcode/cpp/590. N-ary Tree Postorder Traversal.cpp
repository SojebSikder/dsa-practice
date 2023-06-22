#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    vector<int> list;
    vector<int> postorder(Node *root)
    {
        if (root == NULL)
            return list;

        for (int i = 0; i < root->children.size(); i++)
        {
            postorder(root->children[i]);
        }

        list.push_back(root->val);

        return list;
    }
};

int main()
{
    Node *root = new Node(1);
    root->children.push_back(new Node(3));
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(4));
    root->children[0]->children.push_back(new Node(5));
    root->children[0]->children.push_back(new Node(6));

    vector<int> result;

    result = (new Solution())->postorder(root);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}