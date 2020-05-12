int search(int * arr, int n) {
		
	int low = 0;
	int high = n - 1;

	while(low <= high) {
			
		if (low == high) {
			return arr[low];
		} else if (low == high - 1) {
			return max(arr[low], arr[high]);
		} else {
			int mid = low + (high - low) / 2;

			if(arr[mid - 1] < arr[mid] and arr[mid] > arr[mid + 1]) {
				return arr[mid];
			} else if(arr[mid - 1] < arr[mid] and arr[mid + 1] > arr[mid]) {
				low = mid + 1;
			} else if (arr[mid - 1] > arr[mid] and arr[mid] > arr[mid + 1]) {
				high = mid - 1;
			} else {
				return -1;
			}
		}
	}
	
	return -1;
}
