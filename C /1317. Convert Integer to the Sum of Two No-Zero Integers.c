/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool noZero(int x) {
    while (x > 0) {
        if (x % 10 == 0) return false;
        x /= 10;
    }
    return true;
}

int* getNoZeroIntegers(int n, int* returnSize) {
    int* result = malloc(2 * sizeof(int));
    *returnSize = 2;
    
    int i = 1;
    int j = n - 1;

    while (i <= j)
    {
        if (noZero(i) && noZero(j)) {
            result[0] = i;
            result[1] = j;
            break;
        }
        i++;
        j--;
    }
    return result;
}
