Method 2:


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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=NULL;
        if(head==NULL or head->next==NULL){
            return temp;
        }
        slow=slow->next;
        fast=fast->next->next;
        while(slow!=fast){
            if(fast==NULL || fast->next==NULL){
                return temp;
            }
            slow=slow->next;
            fast=fast->next->next;
            
        }
        temp=head;
        while(temp!=NULL){
            if(slow==temp){
                return temp;
            }
            else{
                slow=slow->next;
                temp=temp->next;
            }
        }
        return NULL;
    }
};




