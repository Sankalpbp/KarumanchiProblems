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
    bool hasPathSum(TreeNode* root, int sum) {
		// the question says that if there are no elements, then, no sum can be attained
        if(root == NULL) {
            return false;
        }
        
        int remainingSum = sum - (root -> val);
        if((root -> left and root -> right)) {
            return hasPathSum(root -> left, remainingSum) || hasPathSum(root -> right, remainingSum);
        } else if(root -> left) {
            return hasPathSum(root -> left, remainingSum);
        } else if(root -> right) {
            return hasPathSum(root -> right, remainingSum);
        }
        
        return (root -> val == sum);
    }
};
