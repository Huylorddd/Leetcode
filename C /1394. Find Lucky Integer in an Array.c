int findLucky(int* arr, int arrSize) {
    int* hashmap = calloc(501, sizeof(int));  // constraints from 1 to 500 (all 0 initialize).
    int result = -1;                          // default value if there is no return value.

    for (int i = 0; i < arrSize; i++) {
        hashmap[arr[i]]++;
    }
    for (int i = 1; i <= 500; i++) {
        if (i == hashmap[i] && result < i) result = i;
    }

    free(hashmap);
    return result;
}
