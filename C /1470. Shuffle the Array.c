/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* result = malloc(numsSize * sizeof(int));
    if (!result) return NULL;

    *returnSize = 0;

    for (int i = 0; i < numsSize / 2; i++) {                  // since y1 appear after the last element of x (particularly at the mid of the array).
        result[(*returnSize)++] = nums[i];                    // so we can return from x1 -> xn and y1 -> yn simultaneously, the loop stop condition must be the half of the array.
        result[(*returnSize)++] = nums[numsSize / 2 + i];
    }

    return result;
}
