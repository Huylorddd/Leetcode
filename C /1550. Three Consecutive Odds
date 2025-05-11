bool threeConsecutiveOdds(int* arr, int arrSize) {
    if (arrSize < 3) return false;
    for (int i = 1; i < arrSize - 1; i++) {
        if (arr[i] % 2 != 0 && arr[i-1] % 2 != 0 && arr[i+1] % 2 != 0) return true;
    }
    return false;
}

// In this case, we will compare 3 numbers that stand continously and not an even number.
// But we MUST set the position 'i' is between the 2nd and before the last position in the loop since it will be Overflow.
//
//                                     ERROR.
// for example: if we set i = 1  -->  [i = -1] [i = 0] [i = 1]
//              if we set i = last position  -->   [i = last_position - 1] [i = last_position] [i = last_position + 1]
//                                                                                                  ^ ERROR HERE ^
// That's why we set the loop at (i = 1 and i < Size of array - 1).
