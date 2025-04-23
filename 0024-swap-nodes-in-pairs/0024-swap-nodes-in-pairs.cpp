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
    ListNode* swapPairs(ListNode* head) {
        
        if(head == NULL or head->next == NULL) return head;
        ListNode* ans = head->next;
        ListNode* tail = head->next;
        ListNode* prev = head;
        int c = 1;
        while(tail != NULL){
            ListNode* dn = tail->next;
            prev ->next = tail;
            tail->next = head;
            head->next = dn;
            head = head->next;
            if(head != NULL) tail = head->next;
            else tail = NULL;
            if(c > 1) prev = prev->next->next;
            c += 1;
        }
        return ans;
    }
};