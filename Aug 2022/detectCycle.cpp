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
    bool *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head, *entry = head;
        if (head == NULL || head->next == NULL) return NULL;
        while(fast != NULL && fast->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
            
             return true;
        }
        return false;
    }
};