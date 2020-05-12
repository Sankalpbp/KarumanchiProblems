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
    
    TreeNode* sortedArrayToBST(vector<int> v, int start, int end) {
        if(start > end) {
            return NULL;
        }
        
        TreeNode * node;
        if(start == end) {
            node = new TreeNode(v[start]);
            return node;
        }
        
        int mid = start + (end - start) / 2;
        node = new TreeNode(v[mid]);
        node -> left = sortedArrayToBST(v, start, mid - 1);
        node -> right = sortedArrayToBST(v, mid + 1, end);
        
        return node;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
};
