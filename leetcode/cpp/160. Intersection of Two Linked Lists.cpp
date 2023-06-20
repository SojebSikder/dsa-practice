#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    int length(ListNode *head)
    {
        int len = 0;
        while (head)
        {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (!headA || !headB)
            return NULL;

        // step1
        int lenA = length(headA), lenB = length(headB);

        // step2
        if (lenA > lenB)
        {
            while (lenA > lenB)
            {
                headA = headA->next;
                lenA--;
            }
        }
        else if (lenA < lenB)
        {
            while (lenA < lenB)
            {
                headB = headB->next;
                lenB--;
            }
        }

        // step 3
        while (headA && headB)
        {
            if (headA == headB)
                return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};

int main()
{
    ListNode *headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = new ListNode(8);
    headA->next->next->next = new ListNode(4);
    headA->next->next->next->next = new ListNode(5);

    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = new ListNode(8);
    headB->next->next->next->next = new ListNode(4);
    headB->next->next->next->next->next = new ListNode(5);

    ListNode *result;

    result = (new Solution())->getIntersectionNode(headA, headB);

    cout << result << endl;

    return 0;
}
