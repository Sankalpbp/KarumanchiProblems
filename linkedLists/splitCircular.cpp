void splitList(Node *head, Node **head1_ref, Node **head2_ref) {
		
	Node * slow = head;
	Node * fast = head;

	while (slow != head and fast -> next!= head and fast -> next -> next != head) {
		slow = slow -> next;
		fast = fast -> next -> next;
	}

	// even elements
	if (fast -> next -> next == head) {
		fast = fast -> next;	
	}
	
	*head1_ref = head;
	// to check if there is only one element
	if(head -> next != head) {
		*head2_ref = slow -> next;
	}

	fast -> next = slow -> next;	// closing 2nd list

	slow -> next = head;	// closing 1st list
}

