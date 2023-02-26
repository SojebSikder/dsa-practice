#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *temp = head;
        unordered_map<ListNode *, int> m;

        while (temp != NULL)
        {
            if (m.find(temp) != m.end())
            {
                return temp;
            }
            m[temp]++;
            temp = temp->next;
        }
        return NULL;
    }
};

int main()
{
    ListNode *list = new ListNode(3);
    list->next = new ListNode(2);
    list->next->next = new ListNode(0);
    list->next->next->next = new ListNode(-4);

    ListNode *result;

    result = (new Solution())->detectCycle(list);

    while (result != NULL)
    {
        cout << result->val << endl;
        result = result->next;
    }

    return 0;
}