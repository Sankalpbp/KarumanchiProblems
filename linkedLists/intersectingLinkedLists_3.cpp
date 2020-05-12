 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
	 if(headA == headB) {
		 return headA;
	 }
	 stack<ListNode *> nodes1;
	 stack<ListNode *> nodes2;

	 ListNode * ptr1 = headA;
	 while(ptr1 != NULL) {
		 nodes1.push(ptr1);
		 ptr1 = ptr1 -> next;
	 }

	 ptr1 = headB;
	 while(ptr1 != NULL) {
		 nodes2.push(ptr1);
		 ptr1 = ptr1 -> next;
	 }
	 
	 ListNode * answer = NULL;
	 while(nodes1.empty() == false and nodes2.empty() == false) {
		 	
		 if(nodes1.top() != nodes2.top()) {
			 return answer;
		 }
		 answer = nodes1.top();
		 nodes1.pop();
		 nodes2.pop();
	 }

	 return NULL;
}
