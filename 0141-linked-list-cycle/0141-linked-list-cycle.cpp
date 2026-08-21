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
    bool hasCycle(ListNode *head) {
        ListNode *temp = head;   // slow
        ListNode *curr = head;   // fast

        while(curr != NULL && curr->next != NULL) {
            temp = temp->next;
            curr = curr->next->next;

            if(temp == curr) {
                return true;
            }
        }

        return false;
    }
};