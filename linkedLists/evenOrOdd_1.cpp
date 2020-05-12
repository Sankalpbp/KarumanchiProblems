string evenOrOdd (Node * head) {
		
	Node * ptr = head;

	while (ptr != NULL and ptr -> next != NULL) {
		ptr = ptr -> next -> next;
	}

	if(ptr == NULL) {
		return "even";
	} else {
		return "odd";
	}
}
