MEthod 1:



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
        stack<int> st;
        ListNode* temp=head;
        int len=0;
        bool isodd=false;
        while(temp!=NULL){
            ++len;
            temp=temp->next;
        }
        temp=head;
        int mid=len/2;
        if(len%2!=0){
            mid=mid+1;
            isodd=true;
        }
        int i=0;
        while(i<mid){
            st.push(temp->val);
            temp=temp->next;
            ++i;
        }
        i=0;
        if(isodd){
            i=1;
            st.pop();
        }
        while(i<mid and temp!=NULL){
            if(st.top()!=temp->val){
                return false;
            }
            st.pop();
            temp=temp->next;
        }
        if(!st.empty()){
            return false;
        }
    return true;
    }
};


Method 2:



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
    ListNode* reverseLL(ListNode* head){
    
        ListNode* prev=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
     if(head==NULL || head->next==NULL) {
        return head; 
     }  
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast->next!=NULL and fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=reverseLL(slow->next);
    slow=slow->next;
    while(slow!=NULL){
        if(head->val!=slow->val){
            return false;
        }
        slow=slow->next;
        head=head->next;
    }
    return true;
}
};
