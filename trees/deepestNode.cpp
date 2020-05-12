node * deepestNode (node * root) {
		
	queue<int> pending;
	pending.push(root);

	node * current;
	while(pending.empty() == false) {
			
		current = pending.front();
		pending.pop();

		if(current -> left != NULL) {
			pending.push(current -> left);
		}

		if(current -> right != NULL) {
			pending.push(current -> right);
		}
	}

	return current;
}
