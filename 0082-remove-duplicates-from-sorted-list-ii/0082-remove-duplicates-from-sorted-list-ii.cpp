class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        
        while (head != nullptr) {
            // If current node is a duplicate
            if (head->next != nullptr && head->val == head->next->val) {
                // Skip all nodes with the same value
                while (head->next != nullptr && head->val == head->next->val) {
                    head = head->next;
                }
                // Remove duplicates
                prev->next = head->next;
            } else {
                prev = prev->next; // Move prev forward only if no duplicates
            }
            head = head->next;
        }
        
        return dummy->next;
    }
};
