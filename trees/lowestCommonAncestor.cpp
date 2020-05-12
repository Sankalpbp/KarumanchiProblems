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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* &p, TreeNode* &q) {
        
        if(root != NULL) {
            lowestCommonAncestor(root -> left, p, q);
            lowestCommonAncestor(root -> right, p, q);
            
            if(p == q) {
                return p;
            }
            
            if(root -> left == p or root -> right == p) {
                p = root;
            }
            
            if(root -> left == q or root -> right == q) {
                q = root;
            }
            
        }
            return root;
    }
};
