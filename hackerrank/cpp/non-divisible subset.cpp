#include <bits/stdc++.h>

using namespace std;

int nonDivisibleSubset(int k, vector<int> s)
{
    // maintain frequency of number with 0 to k-1 remainder
    vector<int> freq(k, 0);
    int res;
    // build frequency array
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] % k] += 1;
    }
    // on reaminder 0 case we need only one count , because if we combine diffrent numbers with 0 reminder we end with number which is equally divisible by k
    res = min(freq[0], 1);
    for (int i = 1; i <= (k / 2); i++)
    {
        if (i != k - i)
        {
            res += max(freq[i], freq[k - i]);
        }
        else
        {
            res += min(freq[i], 1);
        }
    }
    return res;
}

int main()
{

    int k = 3;
    vector<int> s = {1, 7, 2, 4};

    int result;

    result = nonDivisibleSubset(k, s); // 3

    cout << result << endl;

    return 0;
}