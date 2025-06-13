char * mergeAlternately(char * word1, char * word2){
    int length = strlen(word1) + strlen(word2);

    char* merge = (char*)malloc((length + 1) * sizeof(char));    // length of 'merge' array should be added more 1 to contain NULL-TERMINATE at last.
    if (!merge) return NULL;

    int i = 0, j = 0, k = 0;

    while (word1[i] != '\0' || word2[j] != '\0') {               // while one of both still remains characters, we continue to add them to the 'merge' array.
        if (word1[i] != '\0') merge[k++] = word1[i++];           // the one of both is over, appending all characters of another array to 'merge'.
        if (word2[j] != '\0') merge[k++] = word2[j++];
    }
    
    merge[k] = '\0';                                             // End of string.

    return merge;
}
