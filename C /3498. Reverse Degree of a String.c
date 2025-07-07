int reverseDegree(char* s) {
    int result = 0;
    int index = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        result += abs(s[i] - 'z' - 1) * index;  // reversed version of alphabetical order.
        index++;                                // index of string is 0-indexed, but the question wants us to multiply with index from 1, that's why we need 'index' (1-indexed) variable.
    }

    return result;
}
