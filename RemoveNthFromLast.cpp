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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            ++len;
            temp=temp->next;
        }
        // cout<<"len "<<len<<endl;
        int toremove=len-n;
        // cout<<"toremove "<<toremove<<endl;

        if(toremove==0){
            temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        else if(toremove==len-1){
            temp=head;
            ListNode* prev=NULL;
            while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }
            prev=temp;
            temp=temp->next;
            delete temp;
            prev->next=NULL;
            return head;
}
        ListNode* del=NULL;
        ListNode* nxt=NULL;
        temp=head;
        // bool isthere=true;
         while(toremove>1){
             temp=temp->next;
             --toremove;
        }
        cout<<"here"<<endl;
        del=temp->next;
        nxt=temp->next->next;
        temp->next=nxt;        
        delete del;
        
        return head;
    }
};
