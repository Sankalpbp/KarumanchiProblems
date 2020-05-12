void zigZagTraversal(Node* root)
{
	// Code here
	int left2Right = 1;
	stack<Node *> st1, st2;
	
	st1.push(root);
	Node * current;
	while(st1.empty() == false) {
	    
	    current = st1.top();
	    st1.pop();
	    
	    if(current != NULL) {
	        cout << current -> data << " ";
	        if(left2Right) {
	            if(current -> left) {
	                st2.push(current -> left);
	            }
	            
	            if(current -> right) {
	                st2.push(current -> right);
	            }
	        } else {
	            if(current -> right) {
	                st2.push(current -> right);
	            }
	            
	            if(current -> left) {
	                st2.push(current -> left);
	            }
	        }
	    }
	    
	    if(st1.empty() == true) {
	        swap(st1, st2);
	        left2Right = 1 - left2Right;
	    }
	}
}
