/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int* stableMountains = malloc(heightSize * sizeof(int));
    if (!stableMountains) return NULL;
    *returnSize = 0;

    for (int i = 1; i < heightSize; i++) {
        if (height[i-1] > threshold) stableMountains[(*returnSize)++] = i;
    }

    return stableMountains;
}

// CODE EXPLAINED ITSELF.
