bool isPowerOfThree(int n) {
    if (n <= 0) return false;    // if parameter is lower or equal to 0 -> FALSE as square root of 3 cannot calculate 0 and belows.
    if (n == 1) return true;     // if parameter is equal to 1 -> TRUE as '1' always return 1.
    while (n >= 2) {
        if (n % 3 != 0) return false;  // check if the parameter can be devided by 3 or not ? If not that means it was not power of 3
        n /= 3;                        // recursive until the minimum value that can be devided by 3.
    }
    return true;
}
