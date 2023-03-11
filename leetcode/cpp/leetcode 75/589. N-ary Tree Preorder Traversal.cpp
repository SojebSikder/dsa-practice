#include <bits/stdc++.h>

using namespace std;

// Definition for a Node.
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
    vector<int> preorder(Node *root)
    {
        if (!root)
        {
            return {};
        }

        vector<int> result;
        stack<Node *> s;

        s.push(root);

        while (!s.empty())
        {
            Node *cur = s.top();

            s.pop();
            result.push_back(cur->val);

            for (int i = cur->children.size() - 1; i >= 0; i--)
            {
                s.push(cur->children[i]);
            }
        }
        return result;
    }
};

int main()
{
    Node *root = new Node(1, vector<Node *>{new Node(3, vector<Node *>{new Node(5), new Node(6)}), new Node(2), new Node(4)});

    vector<int> result;

    result = (new Solution())->preorder(root);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl; //[1,3,5,6,2,4]
    }

    return 0;
}