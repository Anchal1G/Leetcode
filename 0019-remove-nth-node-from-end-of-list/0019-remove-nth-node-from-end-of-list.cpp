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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * dummy = new ListNode();
        dummy->next= head;
        
        ListNode * fast = dummy;
        ListNode * slow = dummy;
        
        //Fast n k baad start hoga.
        for(int i=0;i<n;i++){
            fast = fast->next;
        }
        //Slow aur fast ko ek sath krenge tb slow jisko delte krna  uske phele ko point krega.
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        //slow k next ko delte krdo
        slow->next=slow->next->next;
        return dummy->next;
    }
};