/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize) {
    int* target = calloc(numsSize, sizeof(int));
    if (!target) return NULL;
    int length = 0;                                     // to check how many elements we're having in the array.

    for (int i = 0; i < numsSize; i++) {
        for (int j = length; j > index[i]; j--) {       // we just need to determine the size of 'current' array (do not use numsSize/indexSize) since it has more memory efficiency!
            target[j] = target[j-1];                    // append nums[i] at index[i] of the 'target' and shift all the right-sided values to the right.
        }
        target[index[i]] = nums[i];
        length++;
    }

    *returnSize = numsSize;
    return target;
}
// CODE EXPLAINED ITSELF.
