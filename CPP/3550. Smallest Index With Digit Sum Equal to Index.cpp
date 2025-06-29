class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
        int temp = nums[i];                          // sum of all digits in the array of nums to check whether it's equal to index or not.
        int sum = 0;
        while (temp > 0) {
            int remaining = temp % 10;
            sum += remaining;
            temp /= 10;
        }

        if (sum == i) return i;
    }
    return -1;
    }
};
