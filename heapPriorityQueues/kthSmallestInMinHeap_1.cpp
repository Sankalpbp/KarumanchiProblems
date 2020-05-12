int kth(int * heap, int k) {
		
	for(int i = 0; i < (k - 1); ++i) {
		popping(heap);
	}

	return heap[0];
}
