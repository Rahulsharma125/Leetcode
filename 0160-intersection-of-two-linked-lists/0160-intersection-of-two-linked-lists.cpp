/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp = headA;
        ListNode* curr = headB;

        while (temp != curr) {
            if (temp == NULL)
                temp = headB;
            else
                temp = temp->next;

            if (curr == NULL)
                curr = headA;
            else
                curr = curr->next;
        }

        return temp;
    }
};