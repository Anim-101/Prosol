#include<stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int numOfZeroes = 0;

    int newNums[numsSize];

    for(int i = 0, j = 0; i < numsSize; i++)
    {
        if(nums[i] != 0)
        {
            newNums[j++] = nums[i];
        }
        else if(nums[i] == 0)
        {
            numOfZeroes++;

            continue;
        }
    }

    for(int i = 0; i < numsSize; i++)
    {
        if(i < numsSize - numOfZeroes)
        {
            nums[i] = newNums[i];
        }
        else
        {
            nums[i] = 0;
        }
    }
}

int main()
{
    int nums[] = {1, 2, 0, 3, 1, 0, 1, 0, 3, 12};

    moveZeroes(nums, 10);

    for(int i = 0; i < 10; i ++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
