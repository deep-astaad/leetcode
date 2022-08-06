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
    int getDecimalValue(ListNode* head) {
        // vector<int> v;
        int total = 0;
        ListNode *curr;
        int ans = 0;
        while(curr != NULL){
            // v.push_back(curr->val);
            total++;
            curr = curr->next;
        }
        curr = head;
        while(curr != NULL){
            ans += (curr->val)*pow(2,total-1);
            total--;
            curr = curr->next;
        }
        return ans;
    }
};