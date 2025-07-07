/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* runningSum = calloc(numsSize, sizeof(int));
    if (!runningSum) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        for(int j = 0; j <= i; j++) {
            runningSum[i] += nums[j];
        }
    }

    *returnSize = numsSize;
    return runningSum;
}
// CODE EXPLAINED ITSELF.
