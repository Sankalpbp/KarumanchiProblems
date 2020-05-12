int kth(int * heap, int k) {
		
	vector<int> auxilliary;
	int count = 1;

	insert(auxilliary, heap[0]);
	
	while(true) {
			
		int toReturn = auxilliary[0];
		popping(auxilliary);
		if(++count == k) {
			return toReturn;
		} else {
			insert(auxilliary, heap[1]);
			insert(auxilliary, heap[2]);
		}
	}

	return toReturn;
}
