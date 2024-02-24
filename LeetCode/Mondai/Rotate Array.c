#include<stdio.h>

void rotate(int *nums, int numsSize, int k)
{
    int value = 0;

    if(numsSize != 0)
    {
        k = k % numsSize;

        while(k != 0)
        {
            value = nums[numsSize - 1];

            for(int i = numsSize - 1; i > 0; i--)
            {
                nums[i] = nums[i - 1];
            }

            nums[0] = value;

            k--;
        }
    }
}

int main()
{

    int nums[] = {1, 2, 3, 4, 5, 6, 7};

    rotate(nums, 7, 3);

    printf("\nAfter Rotation: ");

    for(int i = 0; i < 7; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");

    return 0;
}
