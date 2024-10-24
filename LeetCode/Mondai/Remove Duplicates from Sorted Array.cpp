/*
    This code runs only in leet code environment.
    To make it running in local environment,
    make sure to use c++ classes and main function.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;

        for(int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[count] = nums[i];
                count++;
            }
        }

        return count;
    }
};