// 0 for even, 1 for odd

int evenOdd (node * head) {
		
	if (head == NULL) {
		return 0;
	} 

	return (1 ^ evenOdd (head -> next));
}

// if size if 0, then, even
// if size is greater than 0(for now, we are sure that it is 1, other cases will be taken care of recursion), then, take ^(XOR) with 1 and check for the rest of the list
