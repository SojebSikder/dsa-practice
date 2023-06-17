#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int finalValueAfterOperations(vector<string> &operations)
    {
        int result = 0;

        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "++X" || operations[i] == "X++")
            {
                result++;
            }
            else
            {
                result--;
            }
        }

        return result;
    }
};

int main()
{

    vector<string> operations = {"--X", "X++", "X++"};

    int result;

    result = (new Solution())->finalValueAfterOperations(operations);

    cout << result << endl;

    return 0;
}