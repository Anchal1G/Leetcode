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
        ListNode * curr = head;
        ListNode *  ptr = head;
        
        while(ptr!=NULL && ptr->next!=NULL){
            curr= curr->next;
            ptr= ptr->next->next;
            
            if(curr==ptr)return true;
        }
        return false;
    }
};