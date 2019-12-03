#include<stdio.h>

int heightChecker(int *heights, int heightsSize)
{
    int check = 0;

    int tempHeight [heightsSize];

    for(int i = 0; i < heightsSize; i++)
    {
        tempHeight[i] = heights[i];
    }

    int temp;

    for(int i = 0; i < heightsSize - 1; i++)
    {
        for(int j = i + 1; j < heightsSize; j++)
        {
            if(tempHeight[i] > tempHeight[j])
            {
                temp = tempHeight[i];

                tempHeight[i] = tempHeight[j];

                tempHeight[j] = temp;
            }
        }
    }

    for(int i = 0; i < heightsSize; i++)
    {
        if(tempHeight[i] != heights[i])
        {
            check++;
        }
    }

    return check;
}

int main()
{

    int heights [] = {1, 1, 4, 2, 1, 3};

    printf("%d", heightChecker(heights, 6));

    return 0;
}
