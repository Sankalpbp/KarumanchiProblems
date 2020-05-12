int depth(int * tree, int n) {
		
	int maxDepth = -1;
	int currentDepth = -1;
	
	for(int i = 0; i < n; ++i) {
			
		currentDepth = 0;
		j = i;

		while(tree[j] != -1) {
			++currentDepth;
			j = tree[j];
		}

		if(currentDepth > maxDepth) {
			maxDepth = currentDepth;
		}
	}

	return maxDepth;
}
