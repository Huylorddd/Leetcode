char* makeFancyString(char* s) {
    int length = strlen(s);
    char* result = malloc((length+1) * sizeof(char));
    if (!result) return NULL;

    int i = 0, j = 0;
    while (i < length) {
        if (s[i] == s[i+1] && s[i] == s[i+2]) {    //if three or more consecutive characters are equal, keep two of them and delete the rest.
            i++;
            continue;
        }
        else {
            result[j++] = s[i++];
        }
    }
    result[j]= '\0';
    return result;
}
