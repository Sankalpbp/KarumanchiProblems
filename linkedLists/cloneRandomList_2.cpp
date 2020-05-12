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
        
		Node * t1 = head;
		Node * t2 = NULL;

		while (t1 != NULL) {
			t2 = new Node(t1 -> val);
			t2 -> next = t1 -> random;
			t1 -> random = t2;
			t1 = t1 -> next;
		}

		t1 = head;
		while(t1 != NULL) {
			t2 = t1 -> random;
			t2 -> random = t1 -> next -> random;
			t1 = t1 -> next;
		}

		t1 = head;
		Node * node = t1 -> random;
		while(t1 != NULL) {
			t2 = t1 -> random;
			t1 -> random = t2 -> next;
			t2 -> next = t1 -> next -> random;
			t1 = t1 -> next;
		}

		return node;
    }
};
