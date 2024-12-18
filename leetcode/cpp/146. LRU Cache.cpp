#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int key;
    int val;
    Node *prev;
    Node *next;
    Node(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr) {}
};

class LRUCache
{
private:
    int capacity;
    // key -> Node
    unordered_map<int, Node *> cache;
    // track lru
    Node *left;
    // track mru
    Node *right;

    // remove node from list
    void remove(Node *node)
    {
        Node *prev = node->prev;
        Node *next = node->next;

        prev->next = next;
        next->prev = prev;
    }

    // insert node at right
    void insert(Node *node)
    {
        Node *prev = right->prev;

        prev->next = node;
        node->prev = prev;
        node->next = right;
        right->prev = node;
    }

public:
    LRUCache(int capacity)
    {
        this->capacity = capacity;
        cache.clear();

        left = new Node(0, 0);
        right = new Node(0, 0);

        left->next = right;
        right->prev = left;
    }

    int get(int key)
    {
        if (cache.find(key) != cache.end())
        {
            Node *node = cache[key];
            remove(node);
            insert(node);

            return node->val;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if (cache.find(key) != cache.end())
        {
            remove(cache[key]);
        }
        Node *newNode = new Node(key, value);
        cache[key] = newNode;
        insert(newNode);

        if (cache.size() > capacity)
        {
            Node *lru = left->next;
            remove(lru);
            cache.erase(lru->key);
            delete lru;
        }
    }
};

int main()
{
    LRUCache *cache = new LRUCache(2);
    cache->put(1, 1);
    cache->put(2, 2);
    cache->get(1);    // returns 1
    cache->put(3, 3); // evicts key 2
    cache->get(2);    // returns -1 (not found)
    cache->put(4, 4); // evicts key 1
    cache->get(1);    // returns -1 (not found)
    cache->get(3);    // returns 3
    cache->get(4);    // returns 4

    return 0;
}