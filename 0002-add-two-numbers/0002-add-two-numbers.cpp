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
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = new ListNode(0);
        ListNode* ansnew = ans;
        int L1 = 0, L2 = 0;
        while(temp1 != NULL){
            L1 += 1;
            temp1 = temp1 -> next;
        }
        while(temp2 != NULL){
            L2 += 1;
            temp2 = temp2 -> next;
        }
        if(L1 > L2){
            int carry = 0, sum = 0, t;
            while(l2 != NULL){
                sum = l1->val + l2->val + carry;
                t = sum % 10;
                carry = sum / 10;
                ListNode* nn = new ListNode(t);
                ans -> next = nn;
                ans = ans->next;
                l1 = l1->next;
                l2 = l2->next;
            }
            while(l1 != NULL){
                sum = l1->val + carry;
                t = sum % 10;
                carry = sum / 10;
                ListNode*nn = new ListNode(t);
                ans -> next = nn;
                ans = ans->next;
                l1 = l1->next;
            }
            if(carry != 0){
                t = carry;
                ListNode*nn = new ListNode(t);
                ans->next = nn;
            }
        }
        else{
            int carry = 0, sum = 0, t;
            while(l1 != NULL){
                sum = l1->val + l2->val + carry;
                t = sum % 10;
                carry = sum / 10;
                ListNode* nn = new ListNode(t);
                ans -> next = nn;
                ans = ans->next;
                l1 = l1->next;
                l2 = l2->next;
            }
            while(l2 != NULL){
                sum = l2->val + carry;
                t = sum % 10;
                carry = sum / 10;
                ListNode*nn = new ListNode(t);
                ans -> next = nn;
                ans = ans->next;
                l2 = l2->next;
            }
            if(carry != 0){
                t = carry;
                ListNode*nn = new ListNode(t);
                ans->next = nn;
            }
        }
        return ansnew->next;
    }
};