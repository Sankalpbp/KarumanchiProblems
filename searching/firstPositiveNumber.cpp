// we are given a sorted array

int binarySearch(int * arr, int start, int end) {
		
	while(start <= end) {
		int mid = start + (end - start) / 2;
		
		if((mid == start and arr[mid] > 0) or (arr[mid] > 0 and arr[mid - 1] <= 0)) {
			return mid;
		} else if (arr[mid] > 0) {
			end = mid - 1;
		} else if(arr[mid] < 0) {
			start = mid + 1;
		}
	}

	return -1;
}

int firstPositive(int * arr) {
		
	if(arr[0] > 0) {
		return 0;
	}

	int i = 1;
	while(true) {
		// we know that there is a positive number,
		// we are certain, 
		// so, we will use an indefinite loop and break out of it

		if(arr[i] > 0 and arr[i - 1] < 0) {
			return i;
		} else if(arr[i] > 0 and arr[i - 1] > 0) {
			binarySearch(arr, i / 2, i);
		} else {
			i *= 2;
		}
	}

	return -1;
}
