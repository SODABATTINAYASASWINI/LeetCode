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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>v;
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        
        while(head != NULL){
            v.push_back(head->val);
            head = head->next;
        }
        // int n = v.size();
        // for(int i = 1; i <= k ;i++){
        //     int p = v[n - 1];
        //     v.pop_back();
        //     v.insert(v.begin(), p);
        // }
        int n = v.size();
        k = k % n; // Handle cases where k is larger than the size of the vector

        vector<int> temp(k);
        for (int i = 0; i < k; i++) {
            temp[i] = v[n - k + i];
        }

        for (int i = n - 1; i >= k; i--) {
            v[i] = v[i - k];
        }

        for (int i = 0; i < k; i++) {
            v[i] = temp[i];
        }

        ListNode* rotated = new ListNode(0);
        ListNode* temp1 = rotated;
        for(int i = 0; i < n ; i++){
            ListNode* nn = new ListNode(v[i]);
            rotated->next = nn;
            rotated = rotated->next;
        }
        return temp1->next;
    }
};