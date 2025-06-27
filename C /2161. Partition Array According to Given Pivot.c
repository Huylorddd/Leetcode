/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    if (!result) return NULL;

    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot) result[(*returnSize)++] = nums[i];
    }
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == pivot) result[(*returnSize)++] = nums[i];        // reconstruct array to this form: [(smaller than pivot), (equal to pivot), (bigger than pivot)].
    }
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > pivot) result[(*returnSize)++] = nums[i];
    }

    return result;
}
