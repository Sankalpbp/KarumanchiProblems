/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
		Node *x = head;
		Node * y = NULL;

		unordered_map<Node *, Node *> um;
		while (x != NULL) {
			y = new Node(x -> data);
			um[x] = y;
			x = x -> next;
		}

		x = head;
		while(x != NULL) {
			y = um[x];
			y -> next = um[x -> next];
			y -> random = um[x -> random];
			x = x -> next;
		}
		
		return um[head];
    }
};
