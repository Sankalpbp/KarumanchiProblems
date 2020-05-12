int firstOccurence(vector<int> &arr, int n, int x) {
	
	int start = 0;
	int end = n - 1;
	
	while(start <= end) {
		
		int mid = start + (end - start) / 2;
		
		if((mid == start and arr[mid] == x) or (arr[mid] == x and arr[mid - 1] < x)) {
			return mid;
		} else if(arr[mid] >= x) {
			end = mid - 1;
		} else if(arr[mid] < x) {
			start = mid + 1;
		} else {
			return -1;
		}
	}
	
	return -1;
}
