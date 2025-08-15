bool isPowerOfFour(int n) {
    if (n <= 0) return false;
    while (n % 4 == 0) {     // the power of 4 will keep deviding until it become '1'
        n /= 4;              // which is the pure power of 4.
    }
    return n == 1;           // after the loop the last value MUST be 1. I think you catch this idea.
}
