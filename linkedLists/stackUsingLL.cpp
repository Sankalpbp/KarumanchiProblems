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

class stack {
		
	public:
		node * head;
		
		stack() {
			this -> head = NULL;
		}
		bool empty() {
			return (head == NULL);
		}

		void push(int data) {
			node * newNode = new node(data);
			newNode -> next = this -> head;
			this -> head = newNode;
		}

		node * top() {
			return (this -> head);
		}

		void pop() {
			node * toDelete = this -> head;
			this -> head = this -> head -> next;
			delete toDelete;
		}
};

int main(void) {
		
	stack * st = new stack();
	st -> push(1);
	st -> push(2);
	st -> push(3);
	st -> push(4);
	st -> push(5);
	st -> push(6);
	st -> push(7);

	cout << st -> top() -> data<< endl;
	st -> pop();
	cout << st -> top() -> data<< endl;
	st -> pop();
	cout << st -> top() -> data<< endl;
	st -> pop();
	cout << st -> top() -> data<< endl;
	st -> pop();

	cout << st -> top() -> data<< endl;
	st -> pop();

	cout << st -> empty() << endl;
	return 0;
}


