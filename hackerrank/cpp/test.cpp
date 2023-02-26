#include <bits/stdc++.h>
using namespace std;

int n, k, r_q, c_q;
int row[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int col[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    cin >> n >> k >> r_q >> c_q;
    int attack_count = 0;
    for (int i = 0; i < k; i++)
    {
        int r_o, c_o;
        cin >> r_o >> c_o;
        for (int j = 0; j < 8; j++)
        {
            int r = r_o + row[j];
            int c = c_o + col[j];
            if (r == r_q && c == c_q)
            {
                attack_count += min(min(r_q - 1, n - r_q), min(c_q - 1, n - c_q));
                cout << attack_count << endl;
                return 0;
            }
            if (r >= 1 && r <= n && c >= 1 && c <= n)
            {
                if ((r == r_q || c == c_q) || (r + c == r_q + c_q) || (r - c == r_q - c_q))
                {
                    attack_count++;
                }
            }
        }
    }
    attack_count += min(min(r_q - 1, n - r_q), min(c_q - 1, n - c_q));
    attack_count += min(min(r_q - 1, n - r_q), min(c_q - 1, n - c_q));
    attack_count -= min(min(r_q - 1, n - r_q), min(c_q - 1, n - c_q));
    cout << attack_count << endl;
    return 0;
}