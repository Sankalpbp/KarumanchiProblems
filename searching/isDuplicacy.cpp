// the numbers are between 0 and (n - 1)

bool isDuplicacy(int * arr, int n) {
		
	unordered_map<int, int> um;

	for(int i = 0; i < n; ++i) {
		if(arr[abs(arr[i])] < 0) {
			cout << arr[i] << " is a duplicate";
			return true;	
		} else {
			arr[i] *= -1;
		}
	}

	return false;
}
