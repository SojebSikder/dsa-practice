#include <iostream>
#include <vector>

using namespace std;

bool backtrack(vector<int> &arr, int i, int reqSum, int currSum, vector<bool> &isVisited, int k)
{
    if (k == 0)
        return true;
    if (reqSum == currSum)
        return backtrack(arr, 0, reqSum, 0, isVisited, k - 1);

    if (i == arr.size())
        return false;

    if (!isVisited[i] && arr[i] + currSum <= reqSum)
    {
        isVisited[i] = true;
        if (backtrack(arr, i + 1, reqSum, currSum + arr[i], isVisited, k))
            return true;
        isVisited[i] = false;
    }

    return backtrack(arr, i + 1, reqSum, currSum, isVisited, k);
}

bool canPartitionIntoKSubsets(vector<int> &arr, int k)
{

    int sum = 0;
    for (int ele : arr)
        sum += ele;
    if (sum % k != 0)
        return false;

    int n = arr.size();

    vector<bool> vis(n, false);
    return backtrack(arr, 0, sum / k, 0, vis, k);
}

int main()
{

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {

        int n, temp;
        cin >> n;
        vector<int> nums;

        cout << "Case " << i + 1 << ":" << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            nums.push_back(temp);
            cout << canPartitionIntoKSubsets(nums, 3) << endl;
        }
    }

    return 0;
}