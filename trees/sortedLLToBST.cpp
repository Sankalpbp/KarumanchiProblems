/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    ListNode * findMiddle(ListNode * head) {
        
        ListNode * previous = nullptr;
        ListNode * slow = head;
        ListNode * fast = head;
        
        while(fast != nullptr and fast -> next != nullptr) {
            previous = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        if(previous != nullptr) {
            previous -> next = nullptr;
        }
        
        return slow;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        
        if(head == nullptr) {
            return nullptr;
        }
        
        // the data of this node will act as the root of our tree
        ListNode * middle = findMiddle(head);
        
        TreeNode * node;
        // if(middle != NULL)
        node = new TreeNode(middle -> val);
        
        if(head == middle) {
            return node;
        }
        
        node -> left = sortedListToBST(head);
        node -> right = sortedListToBST(middle -> next);
        
        return node;
    }
};





