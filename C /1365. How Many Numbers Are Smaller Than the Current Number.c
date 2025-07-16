/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int count[101] = {0};
    int prefixSum[101] = {0};
    int* result = calloc(numsSize, sizeof(int));
    if (!result) return NULL;
    
    for (int i = 0 ; i < numsSize; i++) {            // counting the number appearance(s).
        count[nums[i]]++;
    }
    for (int i = 1; i < 101; i++) {
        prefixSum[i] = prefixSum[i-1] + count[i-1];  // counting how many numbers that's smaller than nums[i]. E.g: [1,2,3,4] -> 3 numbers that's smaller than '4' (1,2 and 3).
    }
    for (int i = 0; i < numsSize; i++) {             // assigning the number of numbers that's smaller than nums[i] into result[i].
        result[i] = prefixSum[nums[i]];
    }

    *returnSize = numsSize;
    return result;
}
