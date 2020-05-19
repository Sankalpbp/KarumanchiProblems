void zigZagTraversal(Node* root)
{
	// Code here
	int left2Right = 1;
	stack<Node *> currentLevel, nextLevel;
	
	currentLevel.push(root);
	Node * current;
	while(currentLevel.empty() == false) {
	    
	    current = currentLevel.top();
	    currentLevel.pop();
	    
	    if(current != NULL) {
	        cout << current -> data << " ";
	        if(left2Right) {
	            if(current -> left) {
	                nextLevel.push(current -> left);
	            }
	            
	            if(current -> right) {
	                nextLevel.push(current -> right);
	            }
	        } else {
	            if(current -> right) {
	                nextLevel.push(current -> right);
	            }
	            
	            if(current -> left) {
	                nextLevel.push(current -> left);
	            }
	        }
	    }
	    
	    if(currentLevel.empty() == true) {
	        swap(currentLevel, nextLevel);
	        left2Right = 1 - left2Right;
	    }
	}
}
