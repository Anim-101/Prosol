/*
    This code runs only in leet code environment.
    To make it running in local environment,
    make sure to use c++ classes and main function.
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;

        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];
            }
        }

        return k;
    }
};