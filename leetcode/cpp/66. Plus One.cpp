#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // vector<int> plusOne(vector<int> &v)
    // {
    //     int n = v.size();
    //     for (int i = n - 1; i >= 0; i--)
    //     {
    //         if (i == n - 1)
    //             v[i]++;
    //         if (v[i] == 10)
    //         {
    //             v[i] = 0;
    //             if (i != 0)
    //             {
    //                 v[i - 1]++;
    //             }
    //             else
    //             {
    //                 v.push_back(0);
    //                 v[i] = 1;
    //             }
    //         }
    //     }
    //     return v;
    // }
    vector<int> plusOne(vector<int> &v)
    {
        reverse(v.begin(), v.end());

        int carry = 1;
        int i = 0;

        while (carry)
        {
            if (i < v.size())
            {
                if (v[i] == 9)
                {
                    v[i] = 0;
                }
                else
                {
                    v[i]++;
                    carry = 0;
                }
            }
            else
            {
                v.push_back(1);
                carry = 0;
            }
            i++;
        }

        reverse(v.begin(), v.end());

        return v;
    }
};

int main()
{

    vector<int> digits = {1, 2, 3};

    vector<int> result = (new Solution())->plusOne(digits);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}