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

node * pushFront (node * head, int data) {
		
	node * newNode = new node(data);
	newNode -> next = head;
}
