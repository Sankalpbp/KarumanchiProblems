int binarySearch (int * arr, int start, int end) {
		
	while(start <= end) {
			
		int mid = start + (end - start) / 2;
		
		if ((mid == low and arr[mid] == 0) or (arr[mid] == 0 and arr[mid - 1] == 1)) {
			return mid;
		} else if (arr[mid] == 0) {
			end = mid - 1;
		} else if (arr[mid] == 1) {
			start = mid + 1;
		}
	}

	return -1;
}

int firstZero(int * arr) {
		
	// we don't know the size of this gigantic array

	if(arr[0] == 0) {
		return 0;
	}

	int i = 1;

	while(true) {
			
		if (arr[i] == 0 and arr[i - 1] == 1) {
			return i;
		} else if (arr[i] == 0 and arr[i - 1] == 0) {
			return binarySearch(arr, i / 2, i);
		} else if(arr[i] == 1) {
			i *= 2;
		}
	}

	return -1;
}
