#include <bits/stdc++.h>

using namespace std;

//   Definition for singly-linked list.
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
    ListNode *middleNode(ListNode *head)
    {
        if (!head)
            return NULL;

        int count = 0;

        ListNode *node = head;

        while (node != NULL)
        {
            count++;
            node = node->next;
        }

        int midNumber = count / 2;
        count = 0;
        node = head;
        while (count < midNumber)
        {
            node = node->next;
            count++;
        }

        return node;
    }
};

int main()
{
    ListNode *list = new ListNode(1);
    list->next = new ListNode(2);
    list->next->next = new ListNode(3);
    list->next->next->next = new ListNode(4);
    list->next->next->next->next = new ListNode(5);

    ListNode *result;

    result = (new Solution())->middleNode(list);

    while (result != NULL)
    {
        cout << result->val << endl; // [3,4,5]
        result = result->next;
    }

    return 0;
}