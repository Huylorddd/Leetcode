int possibleStringCount(char* word) {
    int count = 1;
    for (int i = 0; word[i+1] != '\0'; i++) {
        if (word[i] == word[i+1]) count++;
    }

    return count;
}
