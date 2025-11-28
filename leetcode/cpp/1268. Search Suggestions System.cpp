#include <bits/stdc++.h>

using namespace std;

class TrieNode
{
public:
    unordered_map<char, TrieNode *> children;
    bool endOfWord = false;
};

class Solution
{
private:
    TrieNode *root;

public:
    Solution()
    {
        this->root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *cur = this->root;

        for (char c : word)
        {
            // if null
            if (cur->children.find(c) == cur->children.end())
            {
                cur->children[c] = new TrieNode();
            }
            cur = cur->children[c];
        }
        cur->endOfWord = true;
    }


    void dfs(TrieNode *node, string &path, vector<string> &result)
    {
        if (node->endOfWord)
        {
            result.push_back(path);
        }

        for (auto &p : node->children)
        {
            path.push_back(p.first);
            dfs(p.second, path, result);
            path.pop_back();
        }
    }

    vector<string> suggestions(string prefix)
    {
        TrieNode *cur = this->root;

        for (char c : prefix)
        {
            if (cur->children.find(c) == cur->children.end())
            {
                return {};
            }
            cur = cur->children[c];
        }

        vector<string> result;
        string path = prefix;
        dfs(cur, path, result);
        return result;
    }

    vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
    {
        vector<vector<string>> results;

        for (string product : products)
        {
            this->insert(product);
        }

        string prefix = "";

        for (char ch : searchWord)
        {
            prefix.push_back(ch);
            vector<string> sugg = this->suggestions(prefix);
            sort(sugg.begin(), sugg.end());
            if (sugg.size() > 3)
            {
                sugg.resize(3);
            }
            results.push_back(sugg);
        }
       
        return results;
    }
};

int main()
{
    Solution *obj = new Solution();

    vector<string> products = {"mobile", "mouse", "moneypot", "monitor", "mousepad"};
    string searchWord = "mouse";

    vector<vector<string>> result = obj->suggestedProducts(products, searchWord);

    for (auto &i : result)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}