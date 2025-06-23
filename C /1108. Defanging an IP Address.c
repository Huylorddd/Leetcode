char * defangIPaddr(char * address){
    char* defangedIP = malloc((strlen(address) + (2 * 3) + 1) * sizeof(char));  // each '.' we add more 2 spaces for '[' and ']', a null-terminator is in the last.
    int indexOfDefangedIP = 0;

    for (int i = 0; address[i] != '\0'; i++) {
        if (address[i] == '.') {
            defangedIP[indexOfDefangedIP++] = '[';
            defangedIP[indexOfDefangedIP++] = '.';
            defangedIP[indexOfDefangedIP++] = ']';
        }
        else defangedIP[indexOfDefangedIP++] = address[i];
    }

    defangedIP[indexOfDefangedIP] = '\0';
    return defangedIP;
}

// CODE EXPLAINED ITSELF.
