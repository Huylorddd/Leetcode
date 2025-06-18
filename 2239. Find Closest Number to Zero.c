int findClosestNumber(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (abs(nums[i]) < abs(result)) {                            // Find the smallest digits in the array.
            result = nums[i];
        }
        else if (abs(nums[i]) == abs(result) && nums[i] > result) {  // If there is another digits which have the same value (positive/negative), check whether it's positive? -> Assign it to result.
            result = nums[i];
        }
    }
    return result;
}
