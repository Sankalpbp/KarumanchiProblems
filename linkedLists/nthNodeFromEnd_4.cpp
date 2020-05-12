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

node * nthNodeFromEnd(node * head, int n) {
		
	int k = 1;
	node * ptr = head; 
	while(ptr != NULL and k != n + 1) {
		ptr = ptr -> next;
		++k;
	}
	
	if(k < n) {
		return NULL;
	}
	node * ptr2 = head;
	while(ptr != NULL) {
		ptr = ptr -> next;
		ptr2 = ptr2 -> next;
	}

	return ptr2;
}

int main(void) {

	node * head = NULL;

	for(int i = 0; i < 10; ++i) {
		head = pushFront(head, i + 1);
	}

	print(head);
	cout << nthNodeFromEnd(head, 1) -> data << endl;
	return 0;
}
