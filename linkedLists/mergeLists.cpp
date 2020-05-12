void mergeLists (Node * l1, Node * l2) {
		
	Node * newNode = new node();
	
	Node * temp = newNode;

	while (l1 != NULL and l2 != NULL) {
		temp -> next = l1;
		temp = temp -> next;
		l1 = l1 -> next;

		temp -> next = l2;
		temp = temp -> next;
		l2 = l2 -> next;
	}

	if(l1 != NULL) {
		temp -> next = l1;
	}

	if(l2 != NULL) {
		temp -> next = l2;
	}

	temp = newNode -> next;
	delete newNode;

	return temp;
}
