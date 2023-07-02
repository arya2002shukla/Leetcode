class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }

        if (count < k) {
            return head;
        }
        
        ListNode* currPtr = head;
        ListNode* prevPtr = NULL;
        ListNode* nextPtr = NULL;
        count = 0;
        
        while (count < k) {
            nextPtr = currPtr->next;
            currPtr->next = prevPtr;
            prevPtr = currPtr;
            currPtr = nextPtr;
            count++;
        }

        if (nextPtr != nullptr) {
            head->next = reverseKGroup(nextPtr, k);
        }
                
        return prevPtr;
    }
};
