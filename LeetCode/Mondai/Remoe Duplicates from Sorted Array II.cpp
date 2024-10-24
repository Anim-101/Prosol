/*
    This code runs only in leet code environment.
    To make it running in local environment,
    make sure to use c++ classes and main function.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 2;

        if (nums.size() <= 2) {
            return nums.size();
        }

        for(int i = 2; i < nums.size(); i++) {
            if (nums[i] != nums[j - 2]) {
               nums[j] = nums[i];
               j++;
            }
        }

        return j;
    }
};