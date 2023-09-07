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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         vector<int> v;
        
        ListNode* curr = head;
        
        while(curr!=NULL){
            v.push_back(curr->val);
            curr = curr->next;
        }
        
        reverse(v.begin()+left-1,v.begin()+right);
        
        ListNode* temp = new ListNode(-1), * ans = temp;
        
        for(auto x: v){
            ans->next = new ListNode(x);
            ans = ans->next;
        }
        return temp->next;
    }
};