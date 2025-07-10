char* convertDecimalToBinary(int n) {        
    char* binary = malloc(33 * sizeof(char));                                                  // maximum: 32 bits
    if (!binary) return NULL;

    if (n == 0) {
        strcpy(binary, "0");                                                                  // if parameter is 0 so the return value is 0.
        return binary;
    }
    int i = 0;
    while (n > 0) {
        binary[i++] = n % 2 + '0';                                                            // based on ASCII-code to determine it's 0 or 1.
        n /= 2;
    }
    for (int j = 0; j < i / 2; j++) {                                                         // reverse string. 
        char temp = binary[j];  
        binary[j] = binary[i - j - 1];
        binary[i - j - 1] = temp; 
    }
    binary[i] = '\0';
    return binary;
}

char* convertDateToBinary(char* date) {
    char yyyy[5] = {date[0], date[1], date[2], date[3], '\0'};
    char mm[3] = {date[5], date[6], '\0'};
    char dd[3] = {date[8], date[9], '\0'};

    char* binaryYear = convertDecimalToBinary(atoi(yyyy));
    char* binaryMonth = convertDecimalToBinary(atoi(mm));
    char* binaryDay = convertDecimalToBinary(atoi(dd));

    int lengthOfResult = strlen(binaryYear) + strlen(binaryMonth) + strlen(binaryDay) + 3;   // two '-' and '\0'.
    char* result = malloc(lengthOfResult * sizeof(char));
    if (!result) return NULL;

    sprintf(result, "%s-%s-%s", binaryYear, binaryMonth, binaryDay);                         // it automatically add '\0' at the end of the 'result' string so we don't need to add it manually.

    free(binaryYear);
    free(binaryMonth);
    free(binaryDay);
    return result;
}
