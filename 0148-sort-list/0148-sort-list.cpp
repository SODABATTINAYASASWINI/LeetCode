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
    ListNode* sortList(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        vector<int>v;
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        sort(v.begin(),v.end());
        ListNode* temp = new ListNode(0);
        ListNode* ans = temp;
        for(int i = 0; i < v.size(); i++){
            ListNode* nn = new ListNode(v[i]);
            temp->next = nn;
            temp = temp->next;
        }
        return ans->next;
    }
};