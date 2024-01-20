#include <bits/stdc++.h>

using namespace std;

class TimeMap
{
public:
    unordered_map<string, vector<pair<string, int>>> m;
    TimeMap()
    {
    }

    void set(string key, string value, int timestamp)
    {
        m[key].push_back({value, timestamp});
    }

    string get(string key, int timestamp)
    {
        int l = 0, r = m[key].size() - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (m[key][mid].second == timestamp)
            {
                return m[key][mid].first;
            }
            else if (m[key][mid].second > timestamp)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (r < 0)
        {
            return "";
        }
        else
        {
            return m[key][r].first;
        }
    }
};

int main()
{
    string key = "foo";

    TimeMap *obj = new TimeMap();
    obj->set(key, "bar", 1);
    obj->set(key, "bar2", 2);
    string param_2 = obj->get(key, 2);

    cout << param_2 << endl;

    return 0;
}