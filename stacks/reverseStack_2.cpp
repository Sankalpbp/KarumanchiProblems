void insertAtBottom(stack<int> &st, int x) {
		
	if(st.empty() == true) {
		st.push(x);
		return;
	}

	int a = st.top();
	st.pop();

	insertAtBottom(st, x);
	st.push(a);
}

void reverse (stack<int> &st) {
		
	if(st.empty() == false) {
		int x = st.top();
		st.pop();
		reverse();
		insertAtBottom(st, x);
	}
}
