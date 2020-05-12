bool binarySearch(int * arr, int n, int k) {
		
	int start = 0;
	int end = n - 1;

	while(end >= start) {
			
		int mid = start + (end - start) / 2;
		if(arr[mid] == k) {
			return true;
		} else if(arr[mid] > k) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}

	return false;
}

bool pairSumAvailable(int * arr1, int * arr2, int n, int k) {
		
	sort(arr1, arr1 + n);
	for(int i = 0; i < n; ++i) {
		if(binarySearch(arr1, n, k - arr2[i])) {
			return true;
		}
	}

	return false;
}
