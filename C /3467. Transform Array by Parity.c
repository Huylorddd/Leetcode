/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* transformArray(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    if (!result) return NULL;

    for (int i = 0; i < numsSize; i++) {
        result[i] = (nums[i] % 2 == 0) ? 0 : 1;                // odd = 1, even = 0 and then sort them by non-ascending order.
    }

    qsort(result, numsSize, sizeof(int), compare);
    
    *returnSize = numsSize;
    return result;
}
