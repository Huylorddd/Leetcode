char* largestGoodInteger(char* num) {
    char* result = malloc(4 * sizeof(char));  // storing 3 digits and a NULL-TERMINATION.
    int len = 0;

    for (int i = 1; num[i] != '\0'; i++) {
        if (num[i-1] == num[i] && num[i] == num[i+1] && num[i] > result[0]) {
            len = 0;                          // reset the len for replacing the whole string if there is a 3-Same-Digit Number that has the larger value than the old one.
            result[len++] = num[i];
            result[len++] = num[i-1];
            result[len++] = num[i+1];
        }
    }
    result[len] = '\0';
    return result;
}
