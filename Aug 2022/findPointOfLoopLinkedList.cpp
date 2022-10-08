 ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head, *entry = head;
        if (head == NULL || head->next == NULL) return NULL;
        while(fast != NULL && fast->next != NULL){
            
            slow = slow->next;
            fast = fast->next->next;
            
             if(slow == fast){
                 while(entry != slow){
                    entry = entry->next;
                    slow = slow->next;
                }
                return entry;
            }
        }
        return NULL;
    }