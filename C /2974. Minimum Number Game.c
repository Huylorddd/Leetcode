/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* numberGame(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    if (!result) return NULL;
    *returnSize = 0;
      
    qsort(nums, numsSize, sizeof(int), compare);              // sorting the array.
    for (int i = 0; i < numsSize - 1; i+=2) {                 // swapping two adjacent elements and insert both to the result.
        result[(*returnSize)++] = nums[i+1];
        result[(*returnSize)++] = nums[i];
    }
    return result;
}
