/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    
    if (pricesSize == 0) return 0;

    *returnSize = pricesSize;
    int* answer = (int*)malloc(pricesSize * sizeof(int));

    for (int i = 0; i < pricesSize; i++) {
        int discount = 0;
        for (int j = i + 1; j < pricesSize; j++) {
            if (prices[j] <= prices[i]) {
                discount = prices[j];
                break;
            }
        }
        answer[i] = prices[i] - discount;
    }

    return answer;
}
