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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev = NULL;
        ListNode *temp = head;
        while(temp != NULL) {
            if (temp->val == val && prev == NULL)
            {
                ListNode *temp2 = temp;
                temp = temp->next;
                head = temp;
                free(temp2);
            }
            else if(temp->val == val && prev != NULL){
                ListNode *temp2=temp;
                prev->next = temp->next;
                temp=temp->next;
                free(temp2);
            }
            else if(temp->val != val){
                prev = temp;
                temp=temp->next;
            }
            
        }
        return head;
    }
};