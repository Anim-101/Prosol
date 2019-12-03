#include<stdio.h>

int singleNumber(int *nums, int numsSize)
{
    int MIN_INT = -32768;

    for(int i = 0; i < numsSize - 1; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
            {
                nums[i] = MIN_INT;

                nums[j] = MIN_INT;

                break;
            }
        }
    }

    int singleNum = 0;

    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != MIN_INT)
        {
           singleNum = nums[i];

            break;
        }
    }

    return singleNum;
}

int main()
{
    int nums[] = {1, 1, 2, 2, 3, 3, 4};

    printf("%d", singleNumber(nums, 7));

    return 0;
}

