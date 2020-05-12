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

ListNode * reverse(ListNode * node) {
		
	ListNode * current = node;
	ListNode * previous = NULL;
	ListNode * next = NULL;

	while(current != NULL) {
		next = current -> next;
		current -> next = previous;
		previous = current;
		current = next;
	}

	return previous;
}

ListNode * newlyArranged(ListNode * head) {
		
	ListNode * slow = head;
	ListNode * fast = head;

	while(slow != NULL and fast != NULL and fast -> next != NULL) {
		slow = slow -> next;
		fast = fast -> next -> next;
	}

	ListNode * head2 = slow -> next;
	slow -> next = NULL;
	ListNode * head1 = head;

	ListNode * ptr1 = head1;
	ListNode * ptr2 = head2;
	ptr2 = reverse(head2);

	ListNode * newNode = new ListNode(0);
	ListNode * temp = newNode;

	while(ptr1 != NULL and ptr2 != NULL) {
		
		temp -> next = ptr1;
		ptr1 = ptr1 -> next;

		temp = temp -> next;

		temp -> next = ptr2;
		ptr2 = ptr2 -> next;
		temp = temp -> next;
	}

	if(ptr1 != NULL) {
		temp -> next = ptr1;
	} else {
		temp -> next = ptr2;
	}

	temp = newNode -> next;
	delete newNode;

	return temp;
}

int main(void) {

	ListNode * head = NULL;

	for(int i = 0; i < 10; ++i) {
		head = pushFront(head, i + 1);
	}

	print(head);

	head = newlyArranged(head);
	print(head);

	return 0;
}
