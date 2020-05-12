// first find the pivot

int findPivot (int * arr, int start, int end) {
	
	if(start == end) {
		return start;
	} else if (start == end - 1) {
		if(arr[start] > arr[end]) {
			return start;
		} else {
			return end;
		}
	} else {
		
		int mid = start + (end - start) / 2;
		if (arr[start] >= arr[mid]) {
			return findPivot(arr, start, mid - 1);
		} else {
			return findPivot(arr, mid, end);
		}
	}

	return -1;
}

// now that we know, where we "need to pivot", we will start our search

int rotatedSearch (int * arr, int n, int k) {
		
	int pivot = findPivot(arr, 0, n - 1);

	if(arr[pivot] == k) {
		return pivot;
	} else if (arr[pivot] <= x) {
		return binarySearch(arr, 0, pivot - 1, k);
	} else {
		return binarySearch(arr, pivot + 1, end, k);
	}

	return -1;
}

// now that we know which part of the pivot we need to search, just start searching that part, with our favorite binary search
int binarySearch(int * arr, int start, int end, int k) {
		
	while(start <= end) {
		int mid = start + (end - start) / 2;

		if(arr[mid] == k) {
			return k;
		} else if (arr[mid] > k) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}

	return -1;
}
