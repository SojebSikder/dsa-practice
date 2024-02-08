#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int countPrimeFactors(int n)
{
    int count = 0;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
    }
    if (n > 1)
    {
        count++;
    }
    return count;
}

int longestSubarrayWithKAlmostPrimes(vector<int> &A, int K)
{
    int n = A.size();
    int left = 0, maxLen = 0;
    unordered_map<int, int> primeFactorCount;
    set<int> uniquePrimes;

    for (int right = 0; right < n; right++)
    {
        int factors = countPrimeFactors(A[right]);

        if (factors > 0)
        {
            primeFactorCount[A[right]]++;
            uniquePrimes.insert(A[right]);
        }

        while (uniquePrimes.size() > K || primeFactorCount[A[left]] > 1)
        {
            if (factors > 0)
            {
                primeFactorCount[A[left]]--;
            }
            if (primeFactorCount[A[left]] == 0)
            {
                uniquePrimes.erase(A[left]);
            }
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main()
{
    int t;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int result = longestSubarrayWithKAlmostPrimes(A, k);
        cout << "Case " << caseNum << ": " << result << endl;
    }
    return 0;
}
