int maxiMin(int * heap, int n) {
		
	// as we are finding the max
	// the data structure is known for giving instant min elements

	// parents can never hold the maximum element(they are parents because they are ligher, in the first place)

	// so we will serch in the leaves only

	int maximum = INT_MIN;
	for(int i = (n / 2); i < n; ++i) {
		maximum = max(maximum, heap[i]);
	}

	return maximum;
}
