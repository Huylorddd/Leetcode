int finalValueAfterOperations(char** operations, int operationsSize) {
    int result = 0;
    
    for (int i = 0; i < operationsSize; i++) {
        if ((operations[i][1] == '+')) result++;      // since the center character is always operation !
        else result--;                                // E.g. "X[+]+", "+[+]X", "X[-]-", "-[-]X".
    }                                                 // we can also use strchar(arr, 'c') to look for operation in the string.

    return result;
}
