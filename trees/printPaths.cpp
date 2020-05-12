void print(vector<int> v, int size) {
    
    for(int i = 0; i < size; ++i) {
        cout << v[i] << " ";
    }
    cout << "#";
}

void printPaths(Node * root, vector<int> &path, int pathLength) {
    if(root == NULL) {
        return;
    }
    
    path[pathLength] = root -> data;
    ++pathLength;
    
    if(root -> left == NULL and root -> right == NULL) {
        print(path, pathLength);
    } else {
        printPaths(root -> left, path, pathLength);
        printPaths(root -> right, path, pathLength);
    }
}

int height(Node * root) {
    if(root == NULL) {
        return 0;
    }
    
    return 1 + max(height(root -> left), height(root -> right));
}

void printPaths(Node* root) {
    vector<int> path(height(root));
    printPaths(root, path, 0);
    cout << endl;
}
