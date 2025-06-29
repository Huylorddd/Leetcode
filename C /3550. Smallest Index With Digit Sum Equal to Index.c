int smallestIndex(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        int temp = nums[i];
        int sum = 0;
        while (temp > 0) {                      // sum of all digits of nums[i] to check whether it's equal to index or not.
            int remaining = temp % 10;
            sum += remaining;
            temp /= 10;
        }

        if (sum == i) return i;
    }
    return -1;
}
