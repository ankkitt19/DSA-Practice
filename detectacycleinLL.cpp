Method 1:


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
        unordered_set<ListNode*> mp;
        ListNode* temp=head;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()){
                return true;
            }
            else{
                mp.insert(temp);
                temp=temp->next;
            }
        }
        return false;
    }
};



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
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL and fast->next!=NULL){
           
            slow=slow->next;
            fast=fast->next->next;
             if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
