int range(BSTNode * root, int a, int b) {
		
	if(root == NULL) {
		return 0;
	}
	
	else if (root -> data > b) {
		return range(root -> left, a, b);
	} else if(root -> data < a) {
		return range(root -> right, a, b);
	} else if(root -> data >= a and root -> data <= b) {
		return range(root -> left, a, b) + range(root -> right, a, b) + 1;
	}
}
