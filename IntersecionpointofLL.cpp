Method1:

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        while(tempA!=NULL){
            ListNode* tempB=headB;
                while(tempB!=NULL){
                    if(tempA==tempB){
                        return tempA;
                    }
                    else{
                        tempB=tempB->next;
                    }
                }
                tempA=tempA->next;
            }
        return tempA;
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        if(headA==NULL or headB==NULL){
            return NULL;
        }
        while(tempA!=tempB){
            tempA=tempA==NULL?headB:tempA->next;
            tempB=tempB==NULL?headA:tempB->next;
        }
        return tempA;
    }
};
