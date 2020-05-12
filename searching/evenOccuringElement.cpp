int evenOccuring(int * arr, int n) {
		
	int even = 0;

	for(int i = 0; i < n; ++i) {
		even ^= arr[i];
	}

	for(int i = 1; i <= n; ++i) {
		even ^= i;
	}

	return even;
}
