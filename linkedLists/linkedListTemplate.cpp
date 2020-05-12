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

int main(void) {

	node * head = NULL;

	for(int i = 0; i < 10; ++i) {
		head = pushFront(head, i + 1);
	}

	print(head);
	return 0;
}
