#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

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
    int getDecimalValue(ListNode *head)
    {
        int result = 0;
        while (head != NULL)
        {
            result = result * 2 + head->val;
            head = head->next;
        }
        return result;
    }
};
int main()
{
    ListNode *head = new ListNode(1, new ListNode(0, new ListNode(1)));

    int result;

    result = (new Solution())->getDecimalValue(head);

    cout << result << endl;

    return 0;
}