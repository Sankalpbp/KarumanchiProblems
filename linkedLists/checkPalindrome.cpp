void reverse(Node * head) {
    
    Node * current = head;
    Node * previous = NULL;
    Node * next = NULL;
    
    while(current != NULL) {
        next = current -> next;
        current -> next = previous;
        previous = current;
        current = next;
    }
    
    head = previous;
}


bool isPalindrome(Node *head) {
    if(head == NULL or head -> next == NULL) {
        return true;
    }
    
    if(head -> next -> next == NULL) {
        return (head -> data == head -> next -> data);
    }
    Node * slow = head;
    Node * fast = head;
    
    while(fast != NULL and fast -> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    
	reverse(slow);
    
    fast = head;
    while(fast != NULL and slow != NULL) {
        if (fast -> data != slow -> data) {
            return false;
        }   
        fast = fast -> next;
        slow = slow -> next;
    }
    
    return true;
}

