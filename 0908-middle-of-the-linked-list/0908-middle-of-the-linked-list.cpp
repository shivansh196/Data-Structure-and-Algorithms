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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        int count=0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp= temp->next;
            count++;
        }
        count= count/2;
        while(count!=0){
            head= head->next;
            count--;
        }
        return head;
    }
};