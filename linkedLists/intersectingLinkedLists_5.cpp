ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

	ListNode * ptr1 = headA, * ptr2 = headB;

	int length1 = 0;
	int length2 = 0;

	while (ptr1 != NULL) {
		++length1;
		ptr1 = ptr1 -> next;
	}

	while (ptr2 != NULL) {
		++length2;
		ptr2 = ptr2 -> next;
	}

	int d = 0;
	if(length1 > length2) {
		d = (length1 - length2);
		ptr1 = headA;
		ptr2 = headB;
	} else {
		d = length2 - length1;
		ptr1 = headB;
		ptr2 = headA;
	}

	for(int i = 0; i < d; ++i) {
		ptr1 = ptr1 -> next;
	}

	while(ptr1 != NULL and ptr2 != NULL) {
		if(ptr1 == ptr2) {
			return ptr1;
		}
		ptr1 = ptr1 -> next;
		ptr2 = ptr2 -> next;
	}

	return NULL;
}
