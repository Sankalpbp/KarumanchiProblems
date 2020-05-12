void countingSort(int * arr, int n, int exponent) {
		
	int * count = new int[n];
	for(int i = 0; i < n; ++i) {
		count[i] = 0;
	}

	for(int i = 0; i < n; ++i) {
		++count[(arr[i] / exponent) % n];
	}

	for(int i = 1; i < n; ++i) {
		count[i] += count[i - 1];
	}

	int * output = new int[n];

	for(int i = n - 1; i >= 0; --i) {
		output[count[(arr[i] / exponent) % n] - 1] = arr[i];
	}

	for(int i = 0; i < n; ++i) {
		arr[i] = output[i];
	}

	delete[] output;
	delete[] count;
}

void sortSpecial(int * arr, int n) {
		
	int exponent = 1;

	int i = 0;
	while(i < 100) {
		countintSort(arr, n, exponent);
		exponent *= n;
		++i;
	}
}
