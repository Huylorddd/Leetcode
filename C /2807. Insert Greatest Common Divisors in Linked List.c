/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int gcd (int a, int b) {
    while (b != 0) {
        int temp = b;                                                                    // algorithm to find greatest divisor between adjacent elements.
        b = a % b;
        a = temp;
    }
    return a;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* current = head;

    while (current && current->next) {
        int greatestDivisor = gcd(current->val, current->next->val);                      
        struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));        // create a new node to contain that gcd value.

        node->val = greatestDivisor;                                                      // KEY LOGIC:
        node->next = current->next;                                                       //  So we need to assign the gcd value into the node that we've created, and next node of it MUST be the next of the original one.
                                                                                          // The next node the of the current node POINT to the node, and then we skip that 'node' to move to the next of original by using
        current->next = node;                                                             // the [current = node->next] which we has assigned for it before (we can also use [current = current->next->next] at line 28).
        current = node->next;                                                             // ILLUSTRATOR:
    }                                                                                     // [3]->[4] ==> [3](head) -->[1](executed in line 27) -->[4]
                                                                                          //               ^ current    ^ (skipped)                 ^ current (move to the next of [1], executed in line 28)
    return head;
}
