char findTheDifference(char* s, char* t) {
    char difference = 0;
    int i = 0, j = 0;

    while (s[i] != '\0' || t[j] != '\0') {
        if (s[i] != '\0') difference ^= s[i++];      // Using XOR sequentially between both arrays to find the difference character. 
        if (t[j] != '\0') difference ^= t[j++];      // XOR between the same digits/characters is equals to 0, that why we can use this method for similar topics.
    }
    return difference;                               // return the different character (ASCII-based) that appears in 1 of both array.
}
