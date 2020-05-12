void checkPairs(pair<int, int> * arr, int n) {
		
	unordered_map<int, int> um;
	for(int i = 0; i < n; ++i) {
			
		if (um.find(arr[i].second) != um.end() and um[arr[i].second] == arr[i].first) {
			cout << arr[i].first << " " << arr[i].second << endl;
		} else {
			um[arr[i].first] = arr[i].second;
		}
	}
}
