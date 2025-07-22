int differenceOfSum(int* nums, int numsSize) {
    int sumElements = 0;
    int sumDigits = 0;

    for (int i = 0; i < numsSize; i++) {
        sumElements += nums[i];
        int temp = nums[i];
        while (temp > 0) {
            sumDigits += temp % 10;
            temp /= 10;
        }
    }
    return abs(sumElements - sumDigits);
}
// CODE EXPLAINED ITSELF.
