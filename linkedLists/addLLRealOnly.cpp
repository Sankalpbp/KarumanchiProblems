/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

	int getSize(ListNode * l) {
		int count = 0;
		while(l1 != NULL) {
			++count;
			l1 = l1 -> next;
		}

		return count;
	}

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        Node * current = NULL;
		if(head1 == NULL) {
			return head2;
		}

		if(head2 == NULL) {
			return head1;
		}

		int size1 = getSize(l1);
		int size2 = getSize(l2);

		int carry = 0;

		if(size1 == size2) {
			return addSameSize(l1, l2, &carry);
		} else {
			int difference = abs(size1 - size2);

			if(size1 < size2) {
				swap(&head1, &head2);

				for(current = head1; --difference; current = current -> next);


			}
		}
    }
};













