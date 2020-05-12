node * squareRootNode (node * head) {
		
	node * sqRoot = NULL;
	int i = 1, j = 1;

	for(node * ptr = head; ptr != NULL; ptr = ptr -> next) {
		if(i == j * j) {
			if(sqRoot == NULL) {
				sqRoot = head;
			} else {
				sqRoot = sqRoot -> next;
			}
			++j;
		}
		++i;
	}

	return sqRoot;
}
