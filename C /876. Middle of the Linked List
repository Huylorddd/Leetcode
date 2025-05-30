/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* current = head;
    int length = 1;                      // initialize 'length' to count how many nodes in the list.

    while (current->next != NULL) {      
        current = current->next;         // traverse through the list and start counting.
        length++;                        
    }

    int mid = 0;                         // finding the middle node.
    mid = length / 2;                    

    current = head;                      // return to the first node of the list and skip until the middle 
    for(int i = 0; i < mid; i++) {       // node then return from there.
        current = current->next;
    }
    return current;
}

// ** Another method is better than this is Fast&Slow Pointer method (which is run through the list one-time):
/*
 *    struct ListNode* slow = head;
 *    struct ListNode* fast = head;
 * 
 *    while (fast != NULL  && fast->next != NULL) {
 *        slow = slow->next;                       // 'slow' just traverse each step and waiting the 'fast' per move.
 *        fast = fast->next->next                  // 'fast' will traverse 2 step ahead to check the last node of the list.
 *    }                                            // For example: slow = 50% - fast = 100% --> so the 'slow' must be the **HALF** of the 'fast', right?
 *    return slow;                                 // This method is also preferred in interview than the easier method above.
*/
