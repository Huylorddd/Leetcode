/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize) {
    int* target = calloc(numsSize, sizeof(int));
    if (!target) return NULL;
    int length = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = length; j > index[i]; j--) {
            target[j] = target[j-1];                    // append nums[i] at index[i] of the 'target' and shift all the right-sided values to the right.
        }
        target[index[i]] = nums[i];
        length++;
    }

    *returnSize = numsSize;
    return target;
}
// CODE EXPLAINED ITSELF.
