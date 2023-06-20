#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        vector<int> n;
        vector<int> rev;

        int nNumber;
        int revNumber;

        while (head)
        {
            n.push_back(head->val);
            rev.push_back(head->val);
            head = head->next;
        }

        reverse(rev.begin(), rev.end());

        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] != rev[i])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    ListNode *headA = new ListNode(1, new ListNode(2, new ListNode(2, new ListNode(1))));

    bool result;

    result = (new Solution())->isPalindrome(headA);

    cout << result << endl;

    return 0;
}
