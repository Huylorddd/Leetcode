/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* result = malloc((right - left + 1) * sizeof(int));
    if (!result) return NULL;
    *returnSize = 0;

    for (int i = left; i <= right; i++) {
        int temp = i;
        bool isSelfDividing = true;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit == 0 || i % digit != 0) {  // if a number cannot divided by its digits or has a 0-digit is not a SDN.
                isSelfDividing = false;
                break;
            }
            temp /= 10;
        }
        if (isSelfDividing == true) {
            result[(*returnSize)++] = i;
        }
    }

    return result;
}
