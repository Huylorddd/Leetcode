/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int length = numsSize * 2;
    *returnSize = length;

    int* ans = malloc(length * sizeof(int));
    if (!ans) return NULL;

    int temporaryPosition = 0;

    for (int i = 0; i < length; i++) {
        if (temporaryPosition == numsSize) temporaryPosition = 0;     // we need to make a cycle to repeat 'nums' array one more time.
        ans[i] = nums[temporaryPosition++];
    }

    return ans;
}

// CODE EXPLAINED ITSELF.
