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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode *> pending;
        pending.push(root);
        
        TreeNode * current;
        int maxSum = INT_MIN;
        int level = 0;
        int maxLevel = 0;
        while(pending.empty() == false) {
            
            int size = pending.size();
            int sum = 0;
            while(size --) {
                current = pending.front();
                pending.pop();
                sum += current -> val;
                if(current -> left) {
                    pending.push(current -> left);
                }
                
                if(current -> right) {
                    pending.push(current -> right);
                }
            }
            ++level;
            if(sum > maxSum) {
                maxSum = sum;
                maxLevel = level;
            }
        }
        
        return maxLevel;
    }
};
