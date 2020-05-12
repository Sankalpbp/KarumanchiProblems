// this will work assuming that the range of elements is (1 to n);

int maxFrequency(int * arr, int n) {
		
	int i = 0;
	int max = 0;
	int maxIndex;

	for(int i = 0; i < n; ++i) {
		arr[arr[i] % n] += n;
	}

	for(int i = 0; i < n; ++i) {
		if(arr[i] / n > max) {
			max = arr[i] / n;
			maxIndex = i;
		}
	}

	return maxIndex;
}
