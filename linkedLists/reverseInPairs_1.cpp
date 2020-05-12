Node* pairWiseSwap(struct Node* head) {

    if(head == NULL or head -> next == NULL) {
        return head;
    }
    
    Node * temp = head -> next;
    head -> next = temp -> next;
    
    temp -> next = head;
    head = temp;
    
    head -> next -> next = pairWiseSwap(head -> next -> next);
    
    return head;
}
