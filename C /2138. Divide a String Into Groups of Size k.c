/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** divideString(char* s, int k, char fill, int* returnSize) {
    int length = strlen(s);
    int numberOfGroups = (length + k - 1) / k;                        // Goal of this formula this try to get celing of a division. Equivalent ~ numberOfGroups = (length % k != 0) ? (length / k) + 1 : length / k.
    *returnSize = numberOfGroups;                                     //                                                                         

    char** groups = malloc(numberOfGroups * sizeof(char*));
    if (!groups) return NULL;

    int positionOfString = 0;

    for (int i = 0; i < numberOfGroups; i++) {
        groups[i] = (char*)malloc((k + 1) * sizeof(char));
        
        for (int j = 0; j < k; j++) {
            if (length <= positionOfString) groups[i][j] = fill;
            else groups[i][j] = s[positionOfString++];
        }
        groups[i][k] = '\0';
    }

    return groups;
}

// CODE EXPLAINED ITSELF.
