#include <bits/stdc++.h>

using namespace std;

class MyHashSet
{
public:
    int v[1000001] = {0};
    MyHashSet()
    {
    }

    void add(int key)
    {
        v[key] = 1;
    }

    void remove(int key)
    {
        v[key] = 0;
    }

    bool contains(int key)
    {
        return v[key];
    }
};

int main()
{
    int key = 10;

    MyHashSet *obj = new MyHashSet();
    obj->add(key);
    obj->remove(key);
    bool param_3 = obj->contains(key);
    // obj->displayHash();

    return 0;
}
