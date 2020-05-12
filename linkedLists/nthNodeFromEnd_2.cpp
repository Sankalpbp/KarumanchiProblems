# include <iostream>
# include <unordered_map>
using namespace std;

class node {
		
	public:
		int data;
		node * next;

		node(int data) {
			this -> data = data;
			this -> next = NULL;
		}
};

node * pushFront(node * head, int data) {
		
	node * newNode = new node(data);

	newNode -> next = head;
	head = newNode;

	return head;
}

void print(node * head) {
		
	cout << endl << endl;
	for(node * ptr = head; ptr != NULL; ptr = ptr -> next) {
		cout << ptr -> data << " -> ";
	}
	cout << endl << endl;
	return;
}

node * nthNodeFromEnd(node * head, int n) {
		
	unordered_map<int, node *> nodes;
	node * ptr = head;

	int k = 0;
	for(; ptr != NULL; ptr = ptr -> next) {
		++k;
		nodes[k] = ptr;
	}

	if(k < n) {
		return NULL;
	}

	return nodes[k - n + 1];
}

int main(void) {

	node * head = NULL;

	for(int i = 0; i < 10; ++i) {
		head = pushFront(head, i + 1);
	}

	print(head);
	cout << nthNodeFromEnd(head, 4) -> data << endl;
	return 0;
}
