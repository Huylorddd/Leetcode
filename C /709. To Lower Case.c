char* toLowerCase(char* s) {
    if (strlen(s) == 0) return 0;

    for (int i = 0; s[i] != '\0'; i++) {        // loop to lowercase all the characters in the string.
        s[i] = tolower(s[i]);
    }
    return s;
}
