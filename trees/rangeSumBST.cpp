/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void range(TreeNode * root, int l, int r, int &s) {
        
        if(root == NULL) {
            return;
        }
        
        if(root -> val >= l) {
            range(root -> left, l, r, s);
        }
        
        if(root -> val >= l and root -> val <= r) {
            s += root -> val;
        }
        
        if(root -> val <= r) {
            range(root -> right, l, r, s);
        }
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum = 0;
        range(root, L, R, sum);
        
        return sum;
    }
};
