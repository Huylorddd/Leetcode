void moveZeroes(int* nums, int numsSize) {
    if (numsSize == 0) return;
    
    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = 0;
            nums[k++] = temp;
        }
    }
}

// We are using two cursors:   i - for loop iteration | k - moves forward if meets condition.
// We can not replace nums[i] directly to nums[k] since we will replace it with 0 afterward and it will be error if the test case was: [1][0] -> [0][0].
// That's why we need a temporary variable to assign it for 'k'.
//
// [1][0] --> [0][0] but we has assigned value '1' to <temp> so it continue to assign '1' to that position (which has move a step forward).
