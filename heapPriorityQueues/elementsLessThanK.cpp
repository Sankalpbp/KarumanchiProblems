void heapify(vector<int> &v, int index);

void printLessThanK(vector<int> &minHeap, int k, int i) {
		
	if(i >= minHeap.size()) {
		return;
	}

	if(minHeap[i] > k) {
		return;
	}

	cout << minHeap[i] << " ";
	printLessThanK(minHeap, k, 2 * i + 1);
	printLessThanK(minHeap, k, 2 * i + 2);
}

printLessThanK(minHeap, k, 0);
