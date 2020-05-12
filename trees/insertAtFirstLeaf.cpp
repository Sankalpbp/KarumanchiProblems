node * insertAtLeaf(node * tree, int data) {
		
	queue<node *> pendingNodes;
	pendingNodes.push(tree);

	while(pendingNodes.empty() == false) {
			
		node * current = pendingNodes.front();
		pendingNodes.pop();

		if(current -> left != NULL) {
			pendingNodes.push(current -> left);
		} else {
			current -> left = new node(data);
			return tree;
		}

		if(current -> right != NULL) {
			pendingNodes.push(current -> right);
		} else {
			current -> right = new node (data);
			return tree;
		}
	}

	return tree;
}
