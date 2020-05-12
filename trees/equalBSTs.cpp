bool equalBSTs(TreeNode * root1, TreeNode * root2) {
		
	if(root1 == NULL and root2 == NULL) {
		return true;
	}

	if(root1 == NULL or root2 == NULL) {
		return false;
	}

	bool lefti = equalBSTs(root1 -> left, root2 -> left);

	if(lefti == false) {
		return false;
	}

	if(root1 -> data != root2 -> data) {
		return false;
	}

	bool righti = equalBSTs(root1 -> right, root2 -> right);

	if(lefti == false) {
		return false;
	}

	return (lefti and righti);
}
