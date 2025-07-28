int countPartitions(int* nums, int numsSize) {
    int result = 0;
    int point = 0;

    while (point < numsSize - 1) {                      // we need to increase size of the left sub-array and decrease the size of the right one each loop.
        int leftSum = 0, rightSum = 0;
        for (int i = 0; i <= point; i++) {              // sum of left sub-array.
            leftSum += nums[i];
        }
        for (int j = numsSize - 1; j > point; j--) {    // sum of right sub-array.
            rightSum += nums[j]; 
        }

        if (abs(leftSum - rightSum) % 2 == 0) result++; // if Absolute Difference of the two sub-arrays is even -> receive.
        point++;
    }
    return result;
}
