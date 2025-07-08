/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    if (!result) return NULL;

    int leftSum[numsSize];
    int rightSum[numsSize];
    leftSum[0] = 0;
    rightSum[numsSize - 1] = 0;


    for (int i = 1; i < numsSize; i++) {
        leftSum[i] = leftSum[i-1] + nums[i-1];
        rightSum[numsSize - i - 1] = rightSum[numsSize - i] + nums[numsSize - i];
    }
    for (int i = 0; i < numsSize; i++) {
        result[i] = abs(leftSum[i] - rightSum[i]);
    }

    *returnSize = numsSize;
    return result;
}
// CODE EXPLAINED ITSELF.
