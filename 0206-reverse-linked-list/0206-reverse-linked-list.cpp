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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        ListNode *temp = head;
        vector<int> ans;
        while(temp){
            ans.push_back(temp -> val);
            temp = temp -> next;
        }
        ListNode* newhead = new ListNode(ans[ans.size() - 1]);
        temp = newhead;
        for(int i=ans.size()-2; i>=0; i--){
            ListNode *newnode = new ListNode(ans[i]);
            temp -> next = newnode;
            temp = temp -> next;
        }
        return newhead;
    }
};