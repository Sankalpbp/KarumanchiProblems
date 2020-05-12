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
	
	ListNode * oddList = NULL;
	ListNode * evenList = NULL;

	ListNode * oddListTail = NULL;
	ListNode * evenListTail = NULL;

	ListNode * iterator = head;

	while(iterator != NULL) {
		
		if(iterator -> data % 2 == 0) {
			if(evenList == NULL) {
				evenList = evenListTail = iterator;
			} else {
				evenListTail -> next = iterator;
				evenListTail = evenListTail -> next;
			}
		} else {
			if(oddList == NULL) {
				oddList = oddListTail = iterator;
			} else {
				oddListTail -> next = iterator;
				oddListTail = oddListTail -> next;
			}
		}

		iterator = iterator -> next;
	}

	evenListTail -> next = oddList;
	return evenList;
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
