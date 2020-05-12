typedef pair<int, pair<int, int> > ppi;

void mergeKArrays (vector<vector<int> > &input, vector<int> & output) {
		
	priority_queue<ppi, vector<ppi>, greater<ppi> > pq;

	for (int i = 0; i < input.size(); ++i) {
			
		ppi toPush;
		// array data
		toPush.first = input[i][0];

		// array index
		toPush.second.first = i;

		// index in an array
		toPush.second.second = 0;

		pq.push(toPush);
	}

	while(pq.empty() == false) {
			
		ppi current = pq.top();
		pq.pop();

		int arrNumber = current.second.first;
		int indexInArray = current.second.second;
		int arrElement = current.first;

		output.push_back(arrElement);

		int nextIndex = indexInArray + 1;
		if (nextIndex < input[arrNumber].size()) {
				
			ppi toPush;
			toPush.first = input[arrNumber][nextIndex];
			toPush.second.first = arrNumber;
			toPush.second.second = nextIndex;

			pq.push(toPush);
		}
	}
}
