bool isValid(char* word) {
    if (strlen(word) < 3) return false;      // if length of string less than 3 -> false
    int length = strlen(word);
    int vowels = 0, consonants = 0;

    for (int i = 0; i < length; i++) {
        if ((word[i] >= '0' && word[i] <= '9')    // check any special symbol(s) in the string.
         || (word[i] >= 'a' && word[i] <= 'z')
         || (word[i] >= 'A' && word[i] <= 'Z')) {
                if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i'      // check how many vowels in the string (at least 1 to be valid).
                 || word[i] == 'o' || word[i] == 'u' || word[i] == 'A'
                 || word[i] == 'E' || word[i] == 'I' || word[i] == 'O'
                 || word[i] == 'U') vowels++;

                else if ((word[i] >= 'a' && word[i] <= 'z')
                      || (word[i] >= 'A' && word[i] <= 'Z')) consonants++;  // check how many consonants in the string (at least 1 to be valid).
            }
        else return false;
    }

    if (vowels > 0 && consonants > 0)  return true;  // both need to be at least 1 for a valid string.
    return false;
}
