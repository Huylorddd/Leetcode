/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* hashmap = malloc(1001 * sizeof(int));                                              // range from [0, 1000].
    int* result = malloc(sizeof(int) * (nums1Size < nums2Size ? nums1Size : nums2Size));
    if (!result) return NULL;

    int indexOfResult = 0;

    for (int i = 0; i < nums1Size; i++) {
        hashmap[nums1[i]] = 1;                                                              // mark all values in the first array for comparing.
    }

    for (int i = 0; i < nums2Size; i++) {
        int value = nums2[i];
        if (hashmap[value] == 1) result[indexOfResult++] = value;                           // add intersection value to array.
        hashmap[value] = 0;                                                                 // avoid duplicated values.
    }

    *returnSize = indexOfResult;
    free(hashmap);
    return result;
}
