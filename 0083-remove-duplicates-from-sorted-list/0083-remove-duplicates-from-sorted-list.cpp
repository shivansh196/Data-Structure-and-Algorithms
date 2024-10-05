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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> st;
        ListNode* temp = head;
        while(temp!=NULL){
            st.insert(temp->val);
            temp=temp->next;
        }
        int n = st.size();
       ListNode* temp1 = new ListNode();
      temp = temp1;
        for(auto it:st){
            ListNode* curr = new ListNode(it);
          temp1->next =curr;
          temp1=curr;
          
          
         // head = head->next;
          
        }
       // head->next  =NULL;
        return temp->next;
    }
};