int compare (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    int maxCount = 0;
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);

    int i = 0, j = 0;
    while (i < gSize && j < sSize) {
        if (s[j] >= g[i]) {
            maxCount++;
            i++;
            j++;
        }
        else j++;
    }
    return maxCount;
}
// AS SAME AS PROBLEM.2410.
