int length (ListNode * head) {
		
	int count = 0;
	while(head != NULL) {
		++count;
		head = head -> next;
	}

	return count;
}

ListNode* reverseKGroup(ListNode* head, int k) {
	ListNode * current = head;
	ListNode * previous = NULL;
	ListNode * next = NULL;

	int count = 0;

	
	while (current != NULL and count < k) {
		next = current -> next;
		current -> next = previous;
		previous = current;
		current = next;
		++count;
	}

	if(next != NULL && length(next) >= k) {
		head -> next = reverseKGroup (next, k);
	}
	
	return previous;
}
