ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (list1 == NULL)
    {
        return list2;
    }
    else if(list2 == NULL){
        return list1;
    }
    ListNode *head;
    if (list1->val < list2->val)
    {
        head = list1;
        list1=list1->next;
    }
    else{
        head = list2;
        list2=list2->next;
    }

    ListNode *temp = head;
    while(list1 != NULL && list2 != NULL){
        if (list1->val < list2->val)
        {
            temp->next = list1;
            list1=list1->next;
            temp = temp->next;
        }
        else if(list1->val > list2->val){
            temp->next = list2;
            list2=list2->next;
            temp = temp->next;
        }
    }
    if (list1 == NULL)
    {
        temp->next = list2;
    }
    else if(list2 == NULL){
        temp->next = list1;
    }
    return head;
}