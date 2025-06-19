int compare (const void* a, const void*b) {
    return (*(int*)a - *(int*)b);
}

int partitionArray(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,sizeof(int),compare);        // sort the array in non-ascending order so as to partition arrays easily
    int count = 0;                                   // group(s) counting.
    int min_point = nums[0];                         // the minimum value each array (the maximum is the value that subtracts the 'min_point' less or equal to 'k').

    for (int i = 0; i < numsSize; i++) {             
        if (nums[i] == min_point) continue;          // if value(s) which is equavilent to min_point (duplicated), it will be skipped.
      
        if (nums[i] - min_point > k) {               // this line means that value is bigger than the limit 'k' when we do subtraction with the minimum value of current array -> it will be set to be the minimum value of the next array.
            count++;                                 // when we reach to the maximum value of an array, we increase 'count' - when a **transaction** between two arrays partition happens.
            min_point = nums[i];                     // min_point will be set to the new minimum value of the next array.
        }
    }
    count++;                                          // add the first group to count (since we just count the time of transaction(s), we haven't counted the first yet).
    return count;
}
