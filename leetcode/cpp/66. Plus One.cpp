#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &v)
    {
        int n = v.size();
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
                v[i]++;
            if (v[i] == 10)
            {
                v[i] = 0;
                if (i != 0)
                {
                    v[i - 1]++;
                }
                else
                {
                    v.push_back(0);
                    v[i] = 1;
                }
            }
        }
        return v;
    }
};

int main()
{

    vector<int> digits;

    vector<int> result;

    result = (new Solution())->plusOne(digits);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}