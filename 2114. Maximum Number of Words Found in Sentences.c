int mostWordsFound(char** sentences, int sentencesSize) {
    int maxCount = 1;

    for (size_t i = 0; i < sentencesSize; i++) {
        int count = 1;
        for (size_t j = 0; sentences[i][j] != '\0'; j++){
            if (sentences[i][j] == ' ') count++;
        }
        maxCount = (maxCount > count) ? maxCount : count;
    }

    return maxCount;
}
