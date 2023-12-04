#include <iostream>
#include <vector>

using namespace std;

void printSubArrays(vector<int> arr, int start, int end, int *ans)
{
    if (end == arr.size())
        return;
    else if (start > end)
        printSubArrays(arr, 0, end + 1, ans);
    else
    {
        int temp = arr[start];
        for (int i = start; i < end; i++)
        {
            // 			cout << arr[i] << ", ";
            if (temp != arr[i + 1])
            {
                *ans = *ans + 1;
                break;
            }
            temp = arr[i + 1];
        }

        printSubArrays(arr, start + 1, end, ans);
    }
    return;
}

int main()
{
    int num;
    cin >> num;
    int ans[num] = {0};
    for (int i = 0; i < num; i++)
    {
        vector<int> arr;
        int n;
        int temp;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        printSubArrays(arr, 0, 0, &ans[i]);

        cout << "Case " << i + 1 << ": " << ans[i] << endl;
    }

    // for (int i = 0; i < num; i++)
    // {
    //     cout << "Case " << i + 1 << ": " << ans[i] << endl;
    // }

    return 0;
}