Method 1:


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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       if(l1==NULL && l2==NULL){
           return NULL;
       }
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        ListNode* l3;
        if(l1->val<=l2->val){
            l3=l1;
            l1=l1->next;
            
        }
        else{
                l3=l2;
                l2=l2->next;
        }
    
        ListNode* last=l3;
    while(l1!=NULL and l2!=NULL){
        if(l1->val>=l2->val){
            last->next=l2;
            l2=l2->next;
        }
        else{
            last->next=l1;
            l1=l1->next;
        }
        last=last->next;
    }
        while(l1!=NULL){
            last->next=l1;
            last=last->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            last->next=l2;
            last=last->next;
            l2=l2->next;
        }
        // last->next=NULL;
        return l3;
    }
};


Method 2:


