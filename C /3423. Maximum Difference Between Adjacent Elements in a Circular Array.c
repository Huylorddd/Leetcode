int maxAdjacentDistance(int* nums, int numsSize) {
    int max;
    for (int i = 1; i < numsSize; i++) {
        max = (abs(nums[i] - nums[i-1]) > max) ? abs(nums[i] - nums[i-1]) : max;            // we do 'abs difference' between adjacent elements until the end to find the maximum.
    }
    return (max > abs(nums[0] - nums[numsSize-1])) ? max : abs(nums[0] - nums[numsSize-1]); // since this is a circular array, the first element is the next of the last element. That's why we also do 'abs difference' between them.
}
