#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        deque<int> q;
        for (int i = 0; i < sandwiches.size(); i++)
        {
            q.push_back(students[i]);
        }
        int i = 0, k = 0;

        while (q.size() != 0 && k != q.size())
        {
            if (q.front() != sandwiches[i])
            {
                q.push_back(q.front());
                k++;
            }
            else
            {
                k = 0;
                i++;
            }
            q.pop_front();
        }
        return q.size();
    }
};

int main()
{
    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 0, 1};

    int result;

    result = (new Solution())->countStudents(students, sandwiches);

    cout << result << endl;

    return 0;
}