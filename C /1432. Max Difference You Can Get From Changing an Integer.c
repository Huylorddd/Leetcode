// THIS PROBLEM IS EXACTLY THE SAME AS 2566. Maximum Difference by Remapping a Digit. You can find find some relative information about this.

int maxDiff(int num) {
    int length = snprintf(NULL, 0, "%d", num);            // find length of parameter and add one space for '\0'.
    length++;

    char* max = malloc(length * sizeof(char));            // create 2 arrays for values changing in the afterward.
    char* min = malloc(length * sizeof(char));
    if (!max || !min) return 0;

    sprintf(max, "%d", num);                              // copy the value of parameter into these arrays.
    sprintf(min, "%d", num);

    char targetMax = '\0';                                // initialize targetMax.
    for (int i = 0; i < length - 1; i++) {                // find the first non-9 digits from the leftmost to rightmost and stop if found one.
        if (max[i] != '9') {
            targetMax = max[i];
            break;
        }
    }
    for (int i = 0; i < length - 1; i++) {                // replace all the occurences (which we've found before) through the array by '9'.
        if (max[i] == targetMax) max[i] = '9';            // E.g '111' -> '999'.
    }

    char targetMin = '\0';                                // initialize targetMin.
    if (min[0] != '1') {                                  // if the first digit in the array is not '1', we replace all the same occurences by '1'.
        targetMin = min[0];                               // AND NOT '0' since the array will become leading zeros and that **breaks the law** !
        for (int i = 0; i < length - 1; i++) {
            if (min[i] == targetMin) min[i] = '1';
        }
    } else {
        for (int i = 0; i < length - 1; i++) {            // if the first digit in the array is '1', we need to find the first non-0 and non-1 digit from the leftmost and replace
             if (min[i] != '0' && min[i] != '1') {        // all the same occurences by '0'.
                targetMin = min[i];                       // E.g '1101057' -> '1101007'.
                break;                                    //   Q&A: why do we don't replace the index[1] and so on by '0' (isn't 1000057 < 1101007) ?
            }                                             //    ---> Since the RULE, if we replace like that we need to replace all the '1' in the array to '0' (which include the first digit), right?
        }
        if (targetMin != '\0') {
            for (int i = 0; i < length - 1; i++) {        // replace all the occurences (which we've found before) through the array by '0'.
                if (min[i] == targetMin) min[i] = '0';
            }
        }
    }

    int maxVal = atoi(max);                               // assigning the value to INTEGER varibles for clean and free the dynamic arrays afterward.
    int minVal = atoi(min);

    free(max);
    free(min);
    return maxVal - minVal;
}
