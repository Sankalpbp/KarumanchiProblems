/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        // we will use the level order stuff
        if(root == NULL) {
            return NULL;
        }
        
        queue<Node *> pendingNodes;
        pendingNodes.push(root);        
        pendingNodes.push(NULL);
        Node * current = NULL;
        while(pendingNodes.empty() == false) {
            
            current = pendingNodes.front();
            pendingNodes.pop();
            
            if(current == NULL) {
                if(pendingNodes.empty() == false) {
                    pendingNodes.push(NULL);
                }
            } else {
                current -> next = pendingNodes.front();
                if(current -> left) {
                    pendingNodes.push(current -> left);
                }
                
                if(current -> right) {
                    pendingNodes.push(current -> right);
                }
            }
        }
        
        return root;
    }
};
