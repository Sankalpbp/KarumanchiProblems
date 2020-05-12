int height(Node * root) {
    if(root == NULL) {
        return 0;
    }
    
    return 1 + max(height(root -> left), height(root -> right));
}

bool isBalanced(Node *root)
{
    //  Your Code here
    if(root == NULL) {
        return true;
    }
    
    bool lefti = isBalanced(root -> left);
    if(lefti == false) {
        return false;
    }
    
    bool righti = isBalanced(root -> right);
    if(righti == false) {
        return false;
    }
    
    if(abs(height(root -> left) - height(root -> right)) > 1) {
       return false; 
    }
    
    return true;
}
