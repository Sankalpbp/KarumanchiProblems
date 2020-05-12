node* findIntersection(node* head1, node* head2) {
	
	unordered_set<ListNode *> us;
	ListNode * ptr = headA;
	while(ptr != NULL) {
		us.insert(ptr);
		ptr = ptr -> next;
	}
	
	ptr = headB;
	while(ptr != NULL) {
		if(us.find(ptr) != us.end()) {
			return ptr;
		}
		ptr = ptr -> next;
	}
	
	return NULL;
}
