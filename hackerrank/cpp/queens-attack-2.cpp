#include <bits/stdc++.h>

using namespace std;

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles)
{
    int result = 0;
    int r_o, c_o;
    int r, c;

    // 8 directions
    vector<vector<int>> directions{{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

    // obstacles
    unordered_map<int, unordered_set<int>> obstacles_map;
    for (int i = 0; i < k; i++)
    {
        r_o = obstacles[i][0];
        c_o = obstacles[i][1];
        obstacles_map[r_o].insert(c_o);
    }

    // check 8 directions
    for (int i = 0; i < 8; i++)
    {
        r = r_q;
        c = c_q;
        while (true)
        {
            r += directions[i][0];
            c += directions[i][1];
            if (r < 1 || r > n || c < 1 || c > n)
            {
                break;
            }
            if (obstacles_map[r].find(c) != obstacles_map[r].end())
            {
                break;
            }
            result++;
        }
    }

    return result;
}

int main()
{

    // int n = 5, k = 3, r_q = 4, c_q = 3;
    // vector<vector<int>> obstacles{{5, 5}, {4, 2}, {2, 3}};
    int n = 4, k = 0, r_q = 4, c_q = 4;
    vector<vector<int>> obstacles;

    int result;

    result = queensAttack(n, k, r_q, c_q, obstacles);

    cout << result << endl; // 9

    return 0;
}