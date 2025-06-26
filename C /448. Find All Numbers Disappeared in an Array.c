/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* hashmap = calloc(numsSize + 1, sizeof(int));     // calloc for zero-initialize for all values in array.
    int* result = malloc(numsSize * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {                  // loop through the array and mark all the number in range from "1 <= nums[i] <= n" (avoid duplicated values).
        hashmap[nums[i]] = 1;
    }
    for (int i = 1; i <= numsSize; i++) {
        if (hashmap[i] == 0) result[(*returnSize)++] = i; // loop from 1 <= numsSize to check the missing value and return. Since the given number is higher than or equals to 1, it's not the 0-indexed, so don't be confuse.
    }

    free(hashmap);
    return result;
}
