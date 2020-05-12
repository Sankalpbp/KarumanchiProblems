Node* pairWiseSwap(Node* head) {

	if(head == NULL or head -> next == NULL) {
		return head;
	}
	Node * ptr1 = NULL, * ptr2 = NULL, * current = head;

	while (current != NULL and current -> next != NULL) {
			
		if (ptr1 != NULL) {
			ptr1 -> next -> next = current -> next;
		}
		
		ptr1 = current -> next;
		current -> next = current -> next -> next;
		ptr1 -> next = current;

		if (ptr2 == NULL) {
			ptr2 = ptr1;
		}

		current = current -> next;
	}

	return ptr2;
}
