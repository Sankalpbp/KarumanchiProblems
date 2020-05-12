void heapify(vector<int> &v, int index) {
		
	int leftChild = 2 * index + 1;
	int rightChild = 2 * index + 2;
	int smallest = index;

	if(leftChild < v.size() and v[leftChild] < v[index]) {
		smallest = leftChild;
	}

	if(rightChild < v.size() and v[rightChild] < v[index]) {
		smallest = rightChild;
	}

	if(smallest != index) {
		swap(v[smallest], v[index]);
		heapify(v, smallest);
	}
}

void popping(vector<int> &v) {
		
	v[0] = v.back();
	v.pop_back();
	heapify(v, 0);
}

void deletion(vector<int> &v, int value) {
		
	int index = -1;

	for(int i = 0; i < v.size(); ++i) {
		if(v[i] = value) {
			index = i;
			v[i] = INT_MIN;
			break;
		}
	}

	heapify(v, index);
	popping(v);
}
