#include <bits/stdc++.h>

using namespace std;

class RecentCounter
{
public:
    queue<int> q;
    RecentCounter()
    {
    }

    int ping(int t)
    {
        q.push(t);
        while (q.front() < t - 3000)
        {
            q.pop();
        }
        return q.size();
    }
};

int main()
{

    RecentCounter *obj = new RecentCounter();
    int param_1 = obj->ping(10);

    cout << param_1 << endl;

    return 0;
}