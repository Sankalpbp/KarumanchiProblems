/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool isMirror(TreeNode* root1, TreeNode *root2) {
        if(root1 == NULL && root2 == NULL) {
            return true;
        }
        
        // for two trees to be the mirror images of each other, the following conditions
        // has to be taken care of
        // 1. the root of tree1 must be the mirror image of the root of tree2
        // 2. The left subtree of tree1 must be the mirror image of the right subtree of tree2
        // 3. The right subtree of tree1 must be equal to the left subtree of tree2
        if(root1 && root2 && (root1 -> val == root2 -> val) && isMirror(root1 -> left, root2 -> right) && isMirror(root1 -> right, root2 -> left)) {
            return true;
        }
        
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
};
