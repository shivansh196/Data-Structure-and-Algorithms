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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr =head->next;
        while(curr!=NULL){
            int ans = gcd(prev->val,curr->val);
            ListNode* new1 = new ListNode();
            new1->val = ans;
            prev->next = new1;
            new1->next = curr;
            prev = curr;
            curr= curr->next;
        }
        return head;
    }
};