#include <bits/stdc++.h>

using namespace std;

int pickingNumbers(vector<int> a)
{
    sort(a.begin(), a.end());
    int ans = 0;
    int maxsettillnow = 0;
    int currentsetsize = 0;
    bool flagfirst = false;
    for (int i = 0; i < a.size(); i++)
    {
        currentsetsize = 0;
        flagfirst = false;
        for (int j = i + 1; j < a.size(); j++)
        {
            int diff = abs(a[i] - a[j]);
            if (diff <= 1)
            {
                if (flagfirst == false)
                {
                    currentsetsize += 2;
                    flagfirst = true;
                }
                else
                {
                    currentsetsize++;
                }
            }
            else
            {
                break;
            }
        }
        maxsettillnow = max(maxsettillnow, currentsetsize);
    }
    return maxsettillnow;
}

int main()
{
    vector<int> a = {4, 6, 5, 3, 3, 1};

    int result;

    result = pickingNumbers(a);

    cout << result << endl; // 3

    return 0;
}