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
    int maxDepth(TreeNode* root) {
        
        if(root == NULL) {
            return 0;
        }
        queue<TreeNode *> pending;
        pending.push(root);
        int level = 0;
        pending.push(NULL);
        
        TreeNode * current;
        while(pending.empty() == false) {
            
            current = pending.front();
            pending.pop();
            
            if(current == NULL) {
                if(pending.empty() == false) {
                    pending.push(NULL);
                }
                ++level;
            } else {
                if(current -> left) {
                    pending.push(current -> left);
                }
            
                if(current -> right) {
                    pending.push(current -> right);
                }
            }
        }
        
        return level;
    }
};
