# include <iostream>
using namespace std;

class ListNode {
		
	public:
		int data;
		ListNode * next;

		ListNode(int data) {
			this -> data = data;
			this -> next = NULL;
		}
};

ListNode * pushFront(ListNode * head, int data) {
		
	ListNode * newNode = new ListNode(data);

	newNode -> next = head;
	head = newNode;

	return head;
}

void print(ListNode * head) {
		
	cout << endl << endl;
	for(ListNode * ptr = head; ptr != NULL; ptr = ptr -> next) {
		cout << ptr -> data << " -> ";
	}
	cout << endl << endl;
	return;
}

ListNode* oddEvenList(ListNode* head) {
	
	ListNode * even = NULL;
	ListNode * evenHead = NULL;
	ListNode * odd = NULL;
	ListNode * oddHead = NULL;
	 
	while (head != NULL) {
			
		if(head -> data % 2 == 0) {
			if(even == NULL) {
				even = new ListNode (head -> data);
				evenHead = even;
			} else {
				even -> next = new ListNode (head -> data);
				even = even -> next;
			}
		} else {
			if(odd == NULL) {
				odd = new ListNode (head -> data);
				oddHead = odd;
			} else {
				odd -> next = new ListNode (head -> data);
				odd = odd -> next;
			}
		}

		ListNode * toDelete = head;
		head = head -> next;
		delete toDelete;
	}

	even -> next = oddHead;
	head = evenHead;

	return head;
}


int main(void) {

	ListNode * head = NULL;

	for(int i = 0; i < 10; ++i) {
		head = pushFront(head, i + 1);
	}

	print(head);

	head = oddEvenList(head);
	print(head);

	return 0;
}
