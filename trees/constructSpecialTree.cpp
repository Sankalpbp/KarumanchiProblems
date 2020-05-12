Node * constructTree(int n, int * pre, char * preLN, int &i) {
    
    if(i >= n) {
        return NULL;
    }
    
    Node * node = new Node(pre[i]);
    
    if(preLN[i] == 'L') {
        return node;
    }
    
    ++(i);
    node -> left = constructTree(n, pre, preLN, i);
    ++(i);
    node -> right = constructTree(n, pre, preLN, i);
    
    return node;
}

struct Node *constructTree(int n, int pre[], char preLN[]) {
    int i = 0;
    return constructTree(n, pre, preLN, i);
}


