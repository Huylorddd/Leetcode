void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {            // FOR NORMAL CASE: When 'nums1 array' always larger than 'nums2 array'.
        if (nums1[i] > nums2[j]) {        // E.g. nums1 [1,2,3,0,0,0], nums2 [3,4,5]
            nums1[k--] = nums1[i--];      
        } else {                          // [!] Since the arrays is sorted in non-descending order. That means the 'nums2 array' always has values that EQUAL or GREATER than 'nums1 array'.
            nums1[k--] = nums2[j--];      // With that information, we can merge 'in-place' them together by adding values of 'nums2 array' directly from the last element of 'nums1 array'.
        }                                 // Illustration: [1,2,3,0,0,0] -> [1,2,3,3,4,5].
    }
    while (j >= 0) {                      // FOR SPECIAL CASE: When 'nums1 array' is empty.
        nums1[k--] = nums2[j--];          // E.g. nums1 [], nums2 [1,5,8]
    }
}
