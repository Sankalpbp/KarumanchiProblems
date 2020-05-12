# include <iostream>
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

int length(node * head) {
		
	if(head == NULL) {
		return 0;
	}

	return 1 + length(head -> next);
}

node * nthNodeFromEnd(node * head, int n) {
		
	int size = length(head);
	if(size < n) {
		return NULL;
	}

	node * ptr = head;

	for(int i = 0; i < (size - n) ; ++i) {
		ptr = ptr -> next;
	}

	return ptr;
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
