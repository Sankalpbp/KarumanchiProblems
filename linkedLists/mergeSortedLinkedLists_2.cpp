ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

	ListNode * newNode = new ListNode();

	ListNode * temp = newNode;

	while (l1 != nullptr and l2 != nullptr) {
			if (l1 -> val < l2 -> val) {
				temp -> next = l1;
				l1 = l1 -> next;
				temp = temp -> next;
			} else {
				temp -> next = l2;
				l2 = l2 -> next;
				temp = temp -> next;
			}
	}

	if (l1 != nullptr) {
		temp -> next = l1;
	} else {
		temp -> next = l2;
	}

	temp = newNode -> next;
	delete newNode;
	return temp;
}
