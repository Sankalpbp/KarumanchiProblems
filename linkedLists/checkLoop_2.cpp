# include <iostream>
# include <unordered_set>
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

bool checkLoop(node * head) {
		
	// we will use the hare and the tortoise algorithm
	unordered_set<node *> us;
	
	while(head != NULL) {
		if(us.find(head) != us.end()) {
			return true;
		}
		us.insert(head);
		head = head -> next;
	}

	return false;
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

int main(void) {
		
	node * head = NULL;
	insert(head, 1);
	insert(head, 9);
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

	if(checkLoop(head)) {
		cout << "there is a loop" << endl;
	} else {
		cout << "there is no loop" << endl;
	}

	return 0;
}
