void merge (int * a, int m, int * b, int n) {
		
	// the idea is to merge them backwards

	int i1 = m - 1;
	int i2 = n - 1;

	for(int k = (m + n - 1); k >= 0; --k) {
		if (i1 >= 0 and a[i1] > b[i2]) {
			a[k] = a[i1];
			--i1;
		} else if (i2 >= 0) {
			a[k] = b[i2];
			--i2;
		}
	}
}
