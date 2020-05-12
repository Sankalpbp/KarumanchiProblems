node * intersection(node * l1, node * l2) {
		
	// here we will use the first repeating method of searching
	vector<node *> arr;

	node * ptr1 = l1;
	node * ptr2 = l2;

	while(ptr1 != NULL) {
		arr.push_back(ptr1);
		ptr1 = ptr1 -> next;
	}

	while (ptr2 != NULL) {
		arr.push_back(ptr2);
		ptr2 = ptr2 -> next;
	}

	unordered_map<node *, int> um;
	for (int i = 0; i < arr.size(); ++i) {
		++um[arr[i]];
	}

	for(int i = 0; i < arr.size(); ++i) {
		if (um[arr[i]] > 1) {
			return arr[i];
		}
	}

	return NULL;
}
