int compare(const void* num1, const void* num2) {
    return (*(int*)num1 - *(int*)num2);               // quick sort algorithm.
}

int arrayPairSum(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), compare);

    int sum = 0;
    for (int i = 0; i < numsSize; i+=2) {             // we DO NOT need to use min(num1, num2) here since the list has been sorted. And the left value of each pair is smaller than the another.
        sum += nums[i];                               // that's why we just sum the even numbers of the array.
    }
    return sum;
}
