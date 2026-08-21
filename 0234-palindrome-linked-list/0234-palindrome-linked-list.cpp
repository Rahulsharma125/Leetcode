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
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        vector<int> ans;
        if(head == NULL) return false;
        while(temp){
            ans.push_back(temp -> val);
            temp = temp -> next;
        }
        int n = ans.size();
        int start = 0; 
        int end = n - 1;
        while(start < end){
            if(ans[start] != ans[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};