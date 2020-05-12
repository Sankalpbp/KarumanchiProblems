node * fractionalNode (node * head, int k) {
		
	node * fraction = NULL;
	int i = 0;

	for(node * ptr = head; ptr != NULL; ptr = ptr -> next) {
			
		if(i % k == 0) {
			if(fraction == NULL) {
				fraction = head;
			} else {
				fraction = fraction -> next;
			}
		}
		++i;
	}

	return fraction;
}
