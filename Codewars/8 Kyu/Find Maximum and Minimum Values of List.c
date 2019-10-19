#include<stdio.h>

int min(int *array, int arrayLength)
{
    int i = 0, minVal = array[i];

    while(i < arrayLength)
    {
        if(minVal > array[i])
        {
            minVal = array[i];
        }

        i++;
    }

    return minVal;
}

int max(int *array, int arrayLength)
{
    int i = 0, maxVal = array[i];

    while(i < arrayLength)
    {
        if(maxVal < array[i])
        {
            maxVal = array[i];
        }

        i++;
    }

    return maxVal;
}
