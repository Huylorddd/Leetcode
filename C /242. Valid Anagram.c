bool isAnagram(char* s, char* t) {

    int hashtable[26] = {0};                   // Initialize hash table for scanning.

    for (int i = 0; s[i] != '\0'; i++) {    
        hashtable[s[i] - 'a']++;
    }                                          // Checking the same characters between both arrays.
    for (int i = 0; t[i] != '\0'; i++) {       // A string that minus 'a' to ensure it's between 0-26 (a-z) characters.
        hashtable[t[i] - 'a']--;               // E.g.  s[i] = 'b' -> ['b' - 'a'] = [98 - 97] = [1] -> hashtable[1]++.
    }                                          //
                                               // This method do not work with Uppercase and Lowercase characters.
    for (int i = 0; i < 26; i++) {
        if (hashtable[i] != 0) return false;   // If hashtable[i] != 0 that means one of both array has (a) different character(s).
    }

    return true;
}
