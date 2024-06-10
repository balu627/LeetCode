class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Calculate the size of the list
        int size = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        // Find the index of the element to remove from the start
        int eleindx = size - n;

        // Special case: if the head is to be removed
        if (eleindx == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Traverse to the node just before the one to be removed
        temp = head;
        for (int i = 1; i < eleindx; ++i) {
            temp = temp->next;
        }

        // Remove the nth node from the end
        ListNode* nodeToRemove = temp->next;
        temp->next = nodeToRemove->next;
        delete nodeToRemove;

        return head;
    }
};
