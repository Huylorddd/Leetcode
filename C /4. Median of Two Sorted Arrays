double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0, j = 0, k = 0;                                      // initialize indices for nums1, nums2 and merge arrays.
    int length = nums1Size + nums2Size;                           // this value is use for initializing 'static array'. I didn't use dynamic here since it affects to memory efficiency.
    int merge[length];

    while (i < nums1Size && j < nums2Size) {                      // this while loop is used to pick values from 2 arrays and put into 'merge' array in sort.
        if (nums1[i] < nums2[j]) {                                // until one of them out of value.
            merge[k++] = nums1[i++];
        } else {
            merge[k++] = nums2[j++];
        }
    }
    while (i < nums1Size) {                                       // in case the second array out of value -> continue to take all left values into merge.
        merge[k++] = nums1[i++];
    }
    while (j < nums2Size) {                                       // in case the first array out of value -> continue to take all left values into merge.
        merge[k++] = nums2[j++];
    }

    double median = 0;

    if (length % 2 != 0) {                                        // if the length is odd, there is only one middle value -> return that value.
        median = merge[length/2];
    } else {                                                      // else, there are two middle value -> we return the average of that two values.  
        median = (merge[length/2 - 1] + merge[length/2]) / 2.0;
    }

    return median;
}

// PAY ATTENTION: This method i'm using has runtime 'O(m+n)', is not 'O(log(m+n))'.
// so you can use this as a simplified version BUT not what interviewers expect.
// in the near future when i'm figure out how can solve this with another version, i'll update in this sector.
