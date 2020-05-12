/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
		ListNode * result = NULL;
		ListNode * temp = NULL;
		ListNode * previous = NULL;

		int carry = 0;
		int sum = 0;

		while(l1 != NULL or l2 != NULL) {
			sum = carry + (l1 ? (l1 -> data) : 0) + (l2 ? (l2 -> data) : 0);
			carry = (sum >= 10) ? 1 : 0;
			sum %= 10;

			ListNode * temp = new ListNode(sum);
			if(result == NULL) {
				result = temp;
			} else {
				previous -> next = temp;
			}

			previous = temp;

			if(first != NULL) {
				first = first -> next;
			}

			if(second != NULL) {
				second = second -> next;
			}
		}

		if(carry > 0) {
			temp -> next = new ListNode(carry);
		}

		return result;
    }

};
