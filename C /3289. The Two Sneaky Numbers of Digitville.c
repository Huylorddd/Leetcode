/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int* hashtable = calloc(numsSize - 2, sizeof(int));            // use calloc: zero-intialization for all values. Since all values are in non-ascending order, so 'numsSize = biggest value' in array.
    int* result = malloc(2 * sizeof(int));                         // only has two sneaky numbers (memory efficiency).
    if (!(hashtable || result)) return NULL;

    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        hashtable[nums[i]]++;
    }

    for (int i = 0; i < numsSize - 2; i++) {
        if (hashtable[i] == 2) result[(*returnSize)++] = i;         // return the duplicated value.
    }

    free(hashtable);
    return result;
}
