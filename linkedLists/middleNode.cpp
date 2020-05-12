node * middleNode (node * head) {
		
	node * ptr1 = head;
	node * ptr2 = head;

	// make sure to return floor(n/2)th node;
	bool i = false;

	while (ptr1 -> next != NULL) {
			
		if (i == false) {
			ptr1 = ptr1 -> next;
			i = true;
		} else {
			ptr1 = ptr1 -> next;
			ptr2 = ptr2 -> next;
			i = false;
		}
	}

	return ptr2;
}
