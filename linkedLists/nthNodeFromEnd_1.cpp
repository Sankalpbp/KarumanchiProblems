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

int size(node * head) {
		
	if(head == NULL) {
		return 0;
	}

	return 1 + size(head -> next);
}

node * nthNodeFromEnd(node * head, int n) {
		
	node * ptr1 = head;
	node * ptr2 = NULL;

	if(size(head) < n) {
		return NULL;
	}

	for(; ptr1 != NULL; ptr1 = ptr1 -> next) {
		ptr2 = ptr1 -> next;
		int count = 0;
		for(; ptr2 != NULL; ptr2 = ptr2 -> next) {
			++count;
		}
		if(count == n - 1) {
			return ptr1;
		}
	}

	return NULL;
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
