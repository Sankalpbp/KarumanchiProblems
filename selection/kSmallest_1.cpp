void kSmallest(int * arr, int n) {
		
	set<int> setting;

	for(int i = 0; i < n; ++i) {
		setting.insert(arr[i]);
	}

	int count = 0;
	for(auto it = setting.begin(); it != setting.end() or count < k; ++it, ++count) {
		cout << *it << " ";
	}

	cout << endl;
}
