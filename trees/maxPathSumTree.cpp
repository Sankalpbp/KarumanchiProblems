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
    int findMaxUtil(TreeNode * root, int & result) {
        
        if(root == NULL) {
            return 0;
        }
        
        int l = findMaxUtil(root -> left, result);
        int r = findMaxUtil(root -> right, result);
        
        int maxSingle = max(max(l, r) + root -> val, root -> val);
        
        int maxTop = max(maxSingle, l + r + root -> val);
        result = max(result, maxTop);
        
        return maxSingle;
    }
    
    int maxPathSum(TreeNode* root) {
        
        int result = INT_MIN;
        
        int a = findMaxUtil(root, result);
        return result;
    }
};
