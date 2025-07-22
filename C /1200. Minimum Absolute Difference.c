/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
} 

int** minimumAbsDifference(int* arr, int arrSize, int* returnSize, int** returnColumnSizes) {
    qsort(arr, arrSize, sizeof(int), compare);

    int minDiff = INT_MAX;
    for (int i = 0; i < arrSize - 1; i++) {
        int diff = abs(arr[i] - arr[i+1]);                      // Minimum Absolute Difference finding.
        minDiff = (minDiff < diff) ? minDiff : diff;
    }

    int** result = malloc((arrSize - 1) * sizeof(int*));        
    *returnColumnSizes = malloc((arrSize - 1) * sizeof(int));   // An array that contains the number of values in each pair. [2,2,2,2] - for example.
    *returnSize = 0;

    for (int i = 0; i < arrSize - 1; i++) {
        int diff = abs(arr[i] - arr[i+1]);
        if (diff == minDiff) {
            result[(*returnSize)] = malloc(2 * sizeof(int));    // Create a memory box for each pair that has value equal to minDiff.
            result[(*returnSize)][0] = arr[i];
            result[(*returnSize)][1] = arr[i+1];
            (*returnColumnSizes)[(*returnSize)] = 2;
            (*returnSize)++;
        }
    }
    return result;
}
