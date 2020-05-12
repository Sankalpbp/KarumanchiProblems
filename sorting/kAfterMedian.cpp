int partition(int * arr, int start, int end) {
		
	int pivot = arr[end];
	int i = start - 1;

	for(int j = start; j < end; ++j) {
		if(pivot >= arr[j]) {
			++i;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i + 1], arr[end]);
	return (i + 1);
}

void quickSelect(int * arr, int start, int end, int k) {
		
	if(start <= end) {
		int partitioningIndex = partition(arr, start, end);

		if(arr[partitioningIndex - 1] == k) {
			return;
		} else if(partition > (k - 1)) {
			quickSelect(arr, start, partitioningIndex - 1);
		} else {
			quickSelect(arr, partitioningIndex + 1, end);
		}
	}
}

void kAfterMedian(int * arr, int n, int k) {
		
	quickSelect(arr, 0, n - 1, n / 2);
	quickSelect(arr, n / 2, n - 1, n / 2 + k);

	sort(arr + n / 2, arr + n / 2 + k);

	for(int i = (n / 2); i < (n / 2 + k); ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
