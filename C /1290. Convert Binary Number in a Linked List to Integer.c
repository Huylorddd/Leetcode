/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    if (head == NULL) {
        return 0;
    }
    struct ListNode* current = head;
    int* binary = calloc(33, sizeof(int));
    int i = 0;
    
    while (current != NULL) {
        binary[i++] = current->val;
        current = current->next;
    }
    i--;
    int j = 0;
    int sum = 0;
    for (i; i >= 0; i--) {
        if (binary[i] != 0) sum += pow(2, j); // or using "sum += 1 << j" for cleaner.
        j++;
    }

    free(binary);
    return sum;
}
// **ALTERNATIVE METHOD** <if you understand BITWISE> (from line 13 - end):
//   int result = 0;
//   while (current != NULL) {
//     result = result * 2 + current->val;
//     current = current->next;
//   }
//   return result;
