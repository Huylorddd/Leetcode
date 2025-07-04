int xorOperation(int n, int start) {
    int result = 0;
    for (size_t i = 0; i < n; i++) {
        result ^= start + 2 * i;
    }
    return result;
}
