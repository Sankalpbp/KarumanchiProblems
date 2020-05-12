void print (node * head) {
		
	if(head == NULL) {
		return;
	}

	print (head -> next);

	cout << head -> data << " ";
}
