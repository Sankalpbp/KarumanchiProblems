int maxDiff(Node *root, int k)
{
    //Your code here
    queue<Node *> pending;
    pending.push(root);
    Node * current = NULL;
    
    int minDifference = INT_MAX;
    int difference = 0;
    int answer;
    
    while(pending.empty() == false) {
        
        current = pending.front();
        pending.pop();
        
        difference = abs(current -> data - k);
        if(minDifference > difference) {
            minDifference = difference;
            answer = current -> data;           
        }
        
        if(current -> left) {
            pending.push(current -> left);
        }
        
        if(current -> right) {
            pending.push(current -> right);
        }
    }
    
    return minDifference;
}

