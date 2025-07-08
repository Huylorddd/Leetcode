int maxFreqSum(char* s) {
    int* hashmap = calloc(26, sizeof(int));
    int maxVowels = 0;
    int maxConsonants = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        hashmap[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (i == 'a' - 'a' || i == 'e' - 'a' || i == 'i' - 'a' || i == 'o' - 'a' || i == 'u' - 'a')     // vowels's position finding algo.
            maxVowels = (maxVowels > hashmap[i]) ? maxVowels : hashmap[i];                              // check frequency of every vowels in the array. (at vowels's position in the alphabetical order).
        else maxConsonants = (maxConsonants > hashmap[i]) ? maxConsonants : hashmap[i];                 // as same as the above but for left characters's frequency in the array.
    }

    free(hashmap);
    return maxVowels + maxConsonants;
}
