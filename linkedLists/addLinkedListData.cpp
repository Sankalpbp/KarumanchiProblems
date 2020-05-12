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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        stack<int> s1, s2;
        
        ListNode * result = nullptr;
        
        while(l1) {
            s1.push(l1 -> val);
            l1 = l1 -> next;
        }
        while(l2) {
            s2.push(l2 -> val);
            l2 = l2 -> next;
        }
        
        int carry(0);
        
        while(s1.empty() == false || s2.empty() == false || carry) {
            
            int val1 = s1.empty() ? 0 : s1.top();
            int val2 = s2.empty() ? 0 : s2.top();
            
            int sum(val1 + val2 + carry);
            
            carry = sum / 10;
            
            ListNode * l3 = new ListNode(sum % 10);
            
            l3 -> next = result;
            result = l3;
            
            if(s1.empty() == false) {
                s1.pop();
            }
            if(s2.empty() == false) {
                s2.pop();
            }
        }
        
        return result;
    }
};
