bool isFullTree (struct Node* root)
{
//add code here.
    if(root == NULL) {
        return true;
    }
    
    if(root -> left == NULL and root -> right == NULL) {
        return true;
    }
    
    if(root -> left == NULL or root -> right == NULL) {
        return false;
    }
    
    return (isFullTree(root -> left) and isFullTree(root -> right));
}
