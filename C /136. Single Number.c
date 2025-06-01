int singleNumber(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }
    return result;
}

// In this case, we use XOR method to filter the single number inside the twice-appear numbers array.
// Like its name, this method only works if the array only contains a single number and others MUST APPEAR EXACTLY TWICE. Otherwise, it's gonna return wrong value.
