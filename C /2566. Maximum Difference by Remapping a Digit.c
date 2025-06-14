int minMaxDifference(int num) {
    int length = snprintf(NULL, 0, "%d", num);            // find the length of the parameter and then add one more space for '\0'.
    length++;
    
    char* max = malloc(length);                           // initialize max and min array for values changing after.
    char* min = malloc(length);
    if (!max || !min) return 0;

    sprintf(max, "%d", num);                              // copy the value of parameter in to max and min array.
    sprintf(min, "%d", num);

    char targetMax = '\0';                                // NULL-TERMINATE
    for (int i = 0; i < length - 1; i++) {                // this loop has a mission finding the digit that different from 9 from the left to right.
        if (max[i] != '9'){                               // we DO NOT need to care what the value of digits is BUT its position.
            targetMax = max[i];                           // E.g:  Given a number 167192 -> just change the '1' to '9' and it will be the biggest number: 967992.
            break;
        } 
    }
    if (targetMax != '\0') {                              // this means the parameter doesn not contain all '9' digits (e.g '99999').
        for (int i = 0; i < length - 1; i++) {            // change all the digits which are the same as the 'targetMax' we set above (take the e.g above: change all digit '1' to '9').
            if (max[i] == targetMax) max[i] = '9';
        }
    }

    char targetMin = min[0];                              // it's so easy for minimize a number by changing its first digit to 'zero' right?
    for (int i = 0; i < length - 1; i++) {                // E.g 167192 -> 067092 -> 67092 (totally minimum).
        if (min[i] == targetMin) min[i] = '0';
    }

    int maxVal = atoi(max);                               // initialize INTEGER variables to contains the values of string max and min.
    int minVal = atoi(min);                               // by the way this function is INTEGER, that's why we must return INTEGER arithmetic.

    free(max);                                            
    free(min);
    return maxVal- minVal;
}
