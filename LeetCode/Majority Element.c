#include<stdio.h>

int majorityElement(int *nums, int numsSize)
{
    int MIN_INT = -32768;

    int num = 0, count = 0, maxCount = 0;

    if(numsSize == 1)
    {
        num = nums[0];
    }
    else
    {
        for(int i = 0; i < numsSize - 1; i++)
        {
            count = 0;

            if(nums[i] == MIN_INT)
            {
                continue;
            }
            else
            {
                for(int j = i + 1; j < numsSize; j++)
                {
                    if(nums[i] == nums[j])
                    {
                        nums[j] = MIN_INT;

                        count++;
                    }
                }
            }

            if(count > maxCount)
            {
                maxCount = count;

                num = nums[i];
            }
        }
    }

    return num;
}

int main()
{
    //int nums[] = {2, 2, 1, 1, 1, 2, 2, 3, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1};

    int nums[] = {2147483647};

    printf("%d", majorityElement(nums, 1));

    return 0;
}
