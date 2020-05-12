DLLNode * DLL_to_BST(DLLNode * head) {
		
	if(head == nullptr or head -> next == nullptr) {
		return (TreeNode *) nullptr;	
	}

	DLLNode * middle = findMiddle(head);
	DLLNode * p = head;
	while(p -> next != middle) {
		p = p -> next;
	}

	p -> next = NULL;
	q = middle -> next;
	middle -> next = NULL;

	middle -> previous = DLL_to_BST(head);
	middle -> next = DLL_to_BST(q);
	
	return middle;
}
