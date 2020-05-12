ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  
	if(l1 == NULL and l2 == NULL) {
		return NULL;
	}

	if(l1 == NULL) {
		return l2;
	}

	if(l2 == NULL) {
		return l1;
	}

	ListNode * result = NULL;

	if(l1 -> data > l2 -> data) {
		result = l2;
		result -> next = mergeTwoLists(l1, l2 -> next);
	} else {
		result = l1;
		result -> next = mergeTwoLists(l1 -> next, l2);
	}

	return result;
}
