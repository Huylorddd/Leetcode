int numIdenticalPairs(int* nums, int numsSize) {
    int result = 0;
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) result++;    // Do not need to add more condition (i < j) since it's clarified at the loop initialization.
        }
    }

    return result;
}
