int minPartitions(char* n) {
    int result = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        result = (result > n[i] - '0') ? result : n[i] - '0';
    }
    return result;
}
// return the max digit in the string.
