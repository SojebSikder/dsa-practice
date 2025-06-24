#include <bits/stdc++.h>

using namespace std;

class TrieNode
{
public:
    unordered_map<char, TrieNode *> children;
    bool endOfWord = false;
};

class Trie
{
private:
    TrieNode *root;

public:
    Trie()
    {
        this->root = new TrieNode();
    }

    void insert(string word)
    {
        TrieNode *cur = this->root;

        for (char c : word)
        {
            if (cur->children[c] == nullptr)
            {
                cur->children[c] = new TrieNode();
            }
            cur = cur->children[c];
        }
        cur->endOfWord = true;
    }

    bool search(string word)
    {
        TrieNode *cur = this->root;

        for (char c : word)
        {
            if (cur->children[c] == nullptr)
            {
                return false;
            }
            cur = cur->children[c];
        }
        return cur->endOfWord;
    }

    bool startsWith(string prefix)
    {
        TrieNode *cur = this->root;

        for (char c : prefix)
        {
            if (cur->children[c] == nullptr)
            {
                return false;
            }
            cur = cur->children[c];
        }
        return true;
    }
};

int main()
{
    Trie *obj = new Trie();
    obj->insert("apple");
    cout << obj->search("apple") << endl;
    cout << obj->search("app") << endl;
    cout << obj->startsWith("app") << endl;
    obj->insert("app");
    cout << obj->search("app") << endl;

    return 0;
}