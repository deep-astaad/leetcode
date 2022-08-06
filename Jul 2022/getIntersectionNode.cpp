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
        int lenA = 0,lenB=0;
        ListNode *tempA=headA,tempB=headB;
        while(tempA != NULL){
            lenA++;
            tempA = tempA->next;
        }
        while(tempB != NULL){
            lenB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        if (lenA > lenB)
        {
            int count = lenA-lenB;
            while(count--){
                tempA= tempA->next;
            }
            while(tempA != NULL && tempB != NULL){
                if (tempA == tempB)
                {
                    return true;
                }
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return false;
        }
        else{
            int count = lenB-lenA;
            while(count--){
                tempB= tempB->next;
            }
            while(tempA != NULL && tempB != NULL){
                if (tempA == tempB)
                {
                    return true;
                }
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return false;
        }
    }
};