/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    node->val = node->next->val;
    node->next = node->next->next;
}
// We DO NOT have any head node or previous node before the given node 'node'.
// So, our approach is: when we catch the node 'node', we will overwrite it:  1. its value is overwritten by the value of the next node.
//                                                                            2. since the value has been overwritten that means it's the next node now, so the pointer need to be changed to the next of the next node.
//                                                                               Illustrate: [1] -> [5] -> [7] -> [9] -> NULL (given node: 7)
//                                                                                           [1] -> [5] -> [9] -> [9] -> NULL. The third node was overwritten by the fourth, so its pointer MUST point to the next of the next node: NULL.
//                                                                                           [1] -> [5] -> [9] ->  X  -> NULL
