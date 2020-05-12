void verticalSum(Node * root, map<int, int> &m, int column) {
    
    if(root == NULL) {
        return;
    }
    
    verticalSum(root -> left, m, column - 1);
    m[column] += root -> data;
    verticalSum(root -> right, m, column + 1);
}

void verticalSum(Node *root) {
    // add code here.
    map<int, int> m;
    verticalSum(root, m, 0);
    
    for(auto it = m.begin(); it != m.end(); ++it) {
        cout << it -> second << " ";
    }
}
