int calPoints(char** operations, int operationsSize) {
    if (operationsSize == 0) return 0;                              // for memory efficiency.

    int record[operationsSize];                                     // we can use dynamic allocation instead of static, but it will cause more memory.
    int index = 0;                                                  // make 'index' pointer for record array as we can not use 'i' directly.
    int total = 0;

    for (int i = 0; i < operationsSize; i++) {
        if (strcmp(operations[i], "+") == 0) {
            record[index++] = record[index-1] + record[index-2]; 
        } else if (strcmp(operations[i], "D") == 0) {
            record[index++] = record[index-1] * 2; 
        } else if (strcmp(operations[i], "C") == 0) {
            index--;
        } else {
            record[index++] = atoi(operations[i]);
        }
    }

    for (int i = 0; i < index; i++) {                                // loop through the list to sum all values.
        total += record[i];
    }

    return total;
}
