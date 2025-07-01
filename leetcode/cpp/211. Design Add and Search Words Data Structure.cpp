#include <bits/stdc++.h>

using namespace std;

class TrieNode
{
public:
    unordered_map<char, TrieNode *> children;
    bool word = false;
};

class WordDictionary
{
private:
    TrieNode *root;

public:
    WordDictionary()
    {
        this->root = new TrieNode();
    }

    void addWord(string word)
    {
        TrieNode *cur = this->root;

        for (char c : word)
        {
            // if it's null
            if (cur->children.find(c) == cur->children.end())
            {
                cur->children[c] = new TrieNode();
            }
            cur = cur->children[c];
        }
        cur->word = true;
    }

    bool search(string word)
    {
        return dfs(word, 0, root);
    }

private:
    bool dfs(string &word, int j, TrieNode *root)
    {
        TrieNode *cur = root;

        for (int i = j; i < word.size(); i++)
        {
            char c = word[i];
            if (c == '.')
            {
                for (auto [ch, child] : cur->children)
                {
                    if (dfs(word, i + 1, child))
                    {
                        return true;
                    }
                }
                return false;
            }
            else
            {
                if (cur->children.find(c) == cur->children.end())
                {
                    return false;
                }
                cur = cur->children[c];
            }
        }

        return cur->word;
    }
};

int main()
{
    WordDictionary *obj = new WordDictionary();
    obj->addWord("bad");
    obj->addWord("dad");
    obj->addWord("mad");
    cout << obj->search("pad") << endl;
    cout << obj->search("bad") << endl;
    cout << obj->search(".ad") << endl;
    cout << obj->search("b..") << endl;

    return 0;
}