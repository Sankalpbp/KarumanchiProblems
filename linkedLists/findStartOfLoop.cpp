node * startingLoop (node * head) {
		
	if(head == NULL and head -> next == NULL) {
		return NULL;
	}

	if(head -> next == head) {
		return head;
	}

	node * tortoise = head;
	node * hare = head;

	while(hare != NULL and tortoise != NULL and hare -> next != NULL) {
		hare = hare -> next -> next;
		tortoise = tortoise -> next;

		if(hare == tortoise) {
			tortoise = head;
			if(tortoise != hare) {
				tortoise = tortoise -> next;
				hare = hare -> next;
			}		
			return tortoise;
		}
	}


	return NULL;
}
