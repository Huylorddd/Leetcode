/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (!list1) return list2;                               // if the first list is out of node, then take the value of another list.
    if (!list2) return list1;                               // if the second list is out of node, then take the value of another list.

    struct ListNode* merge = NULL;                          // create a new list merging two lists.

    if (list1->val < list2->val) {                          // if value of first list is smaller -> take this node of the '1st list' as a (next) node of the new list and move to the **next node** of the first list.
        merge = list1;
        merge->next = mergeTwoLists(list1->next, list2);
    } else {                                                // else -> take this node of the '2nd list' as a (next) node of the new list and move to the **next node** of the second list.
        merge = list2;
        merge->next = mergeTwoLists(list1, list2->next);
    }
    return merge;
}
