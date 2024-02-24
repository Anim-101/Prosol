#include<stdio.h>
#include<stdlib.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int i = 0, j = 0, k = 0;

    int length = m + n;

    int *newNum = (int *) malloc(sizeof(int) * length);

    while(i < m && j < n)
    {
        if(nums1[i] < nums2[j])
        {
            newNum[k++] = nums1[i++];
        }
        else
        {
            newNum[k++] = nums2[j++];
        }
    }

    for(; i < m; i++)
    {
        newNum[k++] = nums1[i];
    }

    for(; j < n; j++)
    {
        newNum[k++] = nums2[j];
    }

    for(int i = 0; i < length; i++)
    {
        nums1[i] = newNum[i];
    }
}

int main()
{
    int nums1 [] = {1, 2, 3, 0, 0, 0};

    int nums2 [] = {2, 5, 6};

    merge(&nums1, 6, 3, &nums2, 3, 3);

    for(int i = 0; i < 6; i ++)
    {
        printf("%d ", nums1[i]);
    }

    return 0;
}
