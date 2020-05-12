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

node * returnSome(node * head) {
		
	node * ptr = head;

	int count = 0;
	while(count <= 5) {
		ptr = ptr -> next;
		++count;
	}

	return ptr;
}

node * returnLast(node * head) {
		
	node * ptr = head;
	while(ptr -> next != NULL) {
		ptr = ptr -> next;
	}
	return ptr;
}

void insert(node * &head, int data) {
	node * newNode = new node(data);
	newNode -> next = head;
	head = newNode;
}

void print(node * head) {
	cout << endl;
	while(head != NULL) {
		cout << head -> data << " -> ";
		head = head -> next;
	}
	cout << endl;
}

node * startOfLoop(node * head, node * loopNode) {

	node * ptr = head;
	node * pointer = loopNode;

	while(true) {
			
		cout << ptr -> data << " ";
		pointer = loopNode;
		while(pointer -> next != ptr or pointer -> next != loopNode) {
			pointer = pointer -> next;
		}
		if(pointer -> next == ptr) {
			break;
		}
		ptr = ptr -> next;
	}

	return loopNode;
}

node * startOfLoop(node * head) {
	node * hare = head;
	node * tortoise = head;

	while(tortoise != NULL and hare != NULL and hare -> next != NULL) {
		tortoise = tortoise -> next;
		hare = hare -> next -> next;

		if(hare == tortoise) {

			node * ptr = head;
			while(true) {
				node * pointer = hare;
				while(pointer -> next != ptr and pointer -> next != hare) {
					pointer = pointer -> next;
				}
				if(pointer -> next = ptr) {
					return ptr;
				}
				ptr = ptr -> next;
			}
		}
	}

	return NULL;
}

void print(node * head, int a) {
		
	int count = 0;
	while(count < 20) {
		cout << head -> data << " ";
		head = head -> next;
		++count;
	}
	return;
}

int main(void) {
		
	node * head = NULL;
	insert(head, 1);
	insert(head, 2);
	insert(head, 3);
	insert(head, 4);
	insert(head, 5);
	insert(head, 6);
	insert(head, 7);
	insert(head, 8);
	insert(head, 9);
	insert(head, 10);

//	print(head);

	node * some = returnSome(head);
	node * last = returnLast(head);

	last -> next = some;
	cout << some -> data << endl;
//	print(head);

	node * answer = startOfLoop(head);
	if(answer) {
		cout << answer -> data << endl;
	} else {
		cout << "no loop";
	}
	return 0;
}
