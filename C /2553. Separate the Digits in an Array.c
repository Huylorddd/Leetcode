/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int length = 0;
    for (int i = 0; i < numsSize; i++) {            // finding the length of array after digits separating.
        int temp = nums[i];
        while (temp > 0) {
            length++;
            temp /= 10;
        }
    }

    int* result = malloc(sizeof(int) * length);
    if (!result) return NULL;
    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        int temp = nums[i];
        int count = 0;                               // we need to store the digits which was separated by while loop
        int digits[10];                              // and reverse it while putting into the result. (size of digits = 10 since the size of 'int').
        while (temp > 0) {
            digits[count++] = temp % 10;
            temp /= 10;
        }
        for (int i = count-1; i >= 0; i--) {
            result[(*returnSize)++] = digits[i];
        }
    }

    return result;
}
