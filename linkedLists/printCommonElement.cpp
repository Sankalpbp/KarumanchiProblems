ListNode * printCommon(ListNode * head1, ListNode * head2) {
		
	ListNode * ptr1 = head1;
	ListNode * ptr2 = head2;

	while(ptr1 != NULL and ptr2 != NULL) {
		
		if(ptr1 -> data == ptr2 -> data) {
			cout << ptr1 -> data;
			cout << " ";
		} else if(ptr1 -> data > ptr2 -> data) {
			ptr2 = ptr2 -> next;
		} else {
			ptr1 = ptr1 -> next;
		}
	}
}
