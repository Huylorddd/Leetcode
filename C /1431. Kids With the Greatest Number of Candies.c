/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* result = malloc(candiesSize * sizeof(bool));

    int maxCandies = 0;
    for (size_t i = 0; i < candiesSize; i++) {
        maxCandies = (maxCandies > candies[i]) ? maxCandies : candies[i];
    }
    for (size_t i = 0; i < candiesSize; i++) {
        if (candies[i] + extraCandies >= maxCandies) result[i] = true;
        else result[i] = false;
    }

    *returnSize = candiesSize;
    return result;
}
// CODE EXPLAINED ITSELF.
