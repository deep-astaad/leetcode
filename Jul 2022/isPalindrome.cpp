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
    ListNode *reverse(ListNode *head){
        if (head== NULL || head->next=NULL)
        {
           return head;
        }
        ListNode *temp = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        head = temp;
        return head;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *mid=NULL;
        ListNode *fast=head,*slow=head;*behind=head;
        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            behind = slow;
            slow = slow->next;
        }
        behind->next = NULL;
        mid = slow;
        mid = reverse(mid);
        ListNode *temp = head;
        while(mid != NULL && temp != NULL){
            if(mid->val != temp->val){
                return false;
            }
            mid = mid->next;
            temp = temp->next;
        }
        return true;
    }
};