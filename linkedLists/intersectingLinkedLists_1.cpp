node* findIntersection(node* head1, node* head2) {
		
	node * ptr1 = head1;
	
	while(ptr1 != NULL) {
		node * ptr2 = head2;

		while (ptr2 != NULL) {
			if (ptr2 == ptr1) {
				return ptr2;
			}
			ptr2 = ptr2 -> next;
		}
		ptr1 = ptr1 -> next;
	}

	return NULL;
}

