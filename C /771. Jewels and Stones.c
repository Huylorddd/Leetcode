int numJewelsInStones(char* jewels, char* stones) {

    int jewelsCount = 0;

    for (int i = 0; jewels[i] != '\0'; i++) {
        for (int j = 0; stones[j] != '\0'; j++) {
            if (jewels[i] == stones[j]) jewelsCount++;
        }
    }

    return jewelsCount; 
}

// CODE EXPLAINED ITSELF.
