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
    TreeNode * kthSmallest(TreeNode * root, int k, int * count) {
        if(root == NULL) {
            return NULL;
        }
        
        TreeNode *  left = kthSmallest(root -> left, k, count);
        if(left != NULL) {
            return left;
        }
        
        if(++(*count) == k) {
            return root;
        }
        
        return kthSmallest(root -> right, k, count);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        // return the kth element in the inorder
        int count = 0;
        TreeNode * answer = kthSmallest(root, k, &count);
        return answer -> val;
    }
};
