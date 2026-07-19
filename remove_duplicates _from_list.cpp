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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
    ListNode* sb = new ListNode(0, head);
    ListNode* slow=sb;
ListNode* fast=head;
    
    while(fast!=nullptr && fast->next!=nullptr){
       if(fast->val==fast->next->val){
           while(fast->next!=nullptr && fast->val==fast->next->val) {
            fast=fast->next;
           }
            slow->next=fast->next;
         }
       else{
        slow=slow->next;
       }
            
            fast=fast->next;
        
        }
        
    return sb->next;
    
    }
};

