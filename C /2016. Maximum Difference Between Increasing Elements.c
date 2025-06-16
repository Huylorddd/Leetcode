int maximumDifference(int* nums, int numsSize) {
    int maxDiff = -1;
    int minVal = nums[0];                                                            // initialize minVal to avoid 2 pointers which has bad runtime (3ms).

    for (int i = 1; i < numsSize; i++) {                                             // we check all the values that's in the right of minVal. if the value is smaller than minVal, it's assigned to minVal. 
        if (minVal > nums[i]) minVal = nums[i];                                      // then we make a subtraction between right-side-of-minVal values and minVal, check if it's the maximum difference ? -> assign to maxDiff directly if there is.
        else if (minVal < nums[i]) {                                                 // 
            maxDiff = (maxDiff > nums[i] - minVal) ? maxDiff : nums[i] - minVal;     //
        } 
    }

    return maxDiff;
}
