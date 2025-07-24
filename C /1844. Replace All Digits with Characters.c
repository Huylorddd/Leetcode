char* replaceDigits(char* s) {
    int length = strlen(s);
    char* result = malloc((length + 1) * sizeof(char));

    for (int i = 0; i < length; i++) {
        if (i % 2 != 0) {
            result[i] = s[i-1] + s[i] - '0';    // digit(s) - '0' == atoi(digit(s)) means the shift the before letter by value.
        }
        else result[i] = s[i];
    }
    result[length] = '\0';  // NULL-TERMINATION
    return result;
}
