int search(int* nums, int numsSize, int target) {

// Left and Right, they're the CURSOR or the LIMIT of each side. The Mid is between them. Illustration: [X][X][X][ L ][][ T ][][][ M ][][][ R ][X][X][X][X][X]
    int left = 0, right = numsSize - 1, mid;

// After every iteration, we need to find the 'value' that nearest 'the target'. That's why we blind-folded determine the MID base on the Average Formula.
// The MID is the average value of RIGHT and LEFT, in this case we don't use the common popular formula: [(A + B) / 2] to find the average. We use the formula below in order to avoid 'HEAP OVERFLOW'.
// Cases:
//    1. if the MID is lower than the TARGET: we teleport the LEFT to the next right the MID, move the MID  (position = average(LEFT,RIGHT)) and elimiate all the value on the left.
//        for example: [L][][M][][][T][R] --> [][][M][L][][T][R] --> [X][X][X][L][M][T][R]
//    2. if the MID is higher than the TARGET: same as case 1.
//        for example: [L][T][][M][][][R] --> [L][T][R][M][][][] --> [L][T,M][R][X][X][X][X]. This case the MID equal the TARGET, easily to return.

    while (left <= right) {
        mid = left + (right - left) / 2;

        if(nums[mid] < target) left = mid + 1;
        else if (nums[mid] > target) right = mid - 1;
        else return mid;
    }

// If the TARGET is not in the array.
    return -1;
}
