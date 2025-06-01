/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;                                               // 'plus one' - that's why.
    int *newarr = (int*)malloc((digitsSize + 1) * sizeof(int));  // initialize dynamic array for shifting case handling. [8,9,9] -> [_,9,0,0] -> [9,0,0,_] -> [9,0,0]

    for (int i = digitsSize-1; i >= 0; i--) {
        int sum = digits[i] + carry;                             // this loop is used to sum digit(s) with carry.
        newarr[i+1] = sum % 10;                                  // [1,9] -> [_,2,0] (carry = 0)  .or.  [9,9] -> [_,0,0] (carry = 1)
        carry = sum / 10;
    }

    if (carry) {                                                 // if we have carry left (usually 1) then we replace the
        newarr[0] = carry;                                       // first digit with 'carry' value.
        carry--;                                                 // 
        *returnSize = digitsSize + 1;                            // [_,0,0] -> [1,0,0] ,for example.
        return newarr;
    } 
    else {                                                       // else we shift all the digits to the left and left the last digit '_'
        for (int i = 0; i < digitsSize; i++) {                   // 
            newarr[i] = newarr[i+1];                             // [_,2,0] -> [2,0,"_"] ,the "_" is the "left unchanged value"
        }                                                        // we don't need to care about this value since it will not
        *returnSize = digitsSize;                                // be returned anyway.
        return newarr;
    }
}

// FOR MORE INFORMATION:
// as you can see the *returnSize (with carry and without).
//   1. if carry: it's easier to add 'carry' to the first digit and return an entire array [1,0,0] since there's no any "left unchanged value".
//   2. without:  since we shift all the digits to the left [_,2,0] -> [2,0,"0"], we can see '0' is "left unchanged value". That's why we just return (size of array - 1) as we do not return the last digit.
