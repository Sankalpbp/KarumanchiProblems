int countNodesinLoop(struct Node *head) {
		
	Node * slow = head;
	Node * fast = head;

	while (slow != NULL and fast != NULL and fast -> next != NULL) {
		slow = slow -> next;
		fast = fast -> next -> next;

		if(slow == fast) {
			int size = 1;
			Node * temp = slow;
			while(temp -> next != slow) {
				++size;
				temp = temp -> next;
			}
			return size;
		}
	}

	return 0;
}
