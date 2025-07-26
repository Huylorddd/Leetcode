/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
bool contains(int* arr, int arrSize, int val) {
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == val) return true;          // to check if 'val' is equal to 1 of values in arr
    }
    return false;
}

int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes) {
    int* unique1 = malloc(sizeof(int) * nums1Size);
    int* unique2 = malloc(sizeof(int) * nums2Size);
    int count1 = 0, count2 = 0;

    for (int i = 0; i < nums1Size; i++) {
        if (!contains(nums2, nums2Size, nums1[i]) && !contains(unique1, count1, nums1[i])) {      // if val(s) is different from every val in arr2 and is not duplicated in 'unique1' array.
            unique1[count1++] = nums1[i];
        }
    }
    for (int i = 0; i < nums2Size; i++) {
        if (!contains(nums1, nums1Size, nums2[i]) && !contains(unique2, count2, nums2[i])) {      // if val(s) is different from every val in arr1 and is not duplicated in 'unique2' array.
            unique2[count2++] = nums2[i];
        }
    }

    int** answer = malloc(sizeof(int*) * 2);
    answer[0] = malloc(sizeof(int) * count1);
    answer[1] = malloc(sizeof(int) * count2);

    for (int i = 0; i < count1; i++) {              // add unique values in arr1 to list1 of answer (for arr1).
        answer[0][i] = unique1[i];
    }
    for (int i = 0; i < count2; i++) {              // add unique values in arr2 to list2 of answer (for arr1).
        answer[1][i] = unique2[i];
    }
    *returnColumnSizes = malloc(sizeof(int) * 2);
    (*returnColumnSizes)[0] = count1;
    (*returnColumnSizes)[1] = count2;

    *returnSize = 2;
    free(unique1);
    free(unique2);
    return answer;
}
