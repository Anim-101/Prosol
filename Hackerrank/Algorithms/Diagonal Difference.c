#include<stdio.h>

int main()
{
    int scanNum;

    scanf("%d", &scanNum);

    int array[scanNum][scanNum];

    int sumOne = 0, sumTwo = 0;

    int reverseJ = scanNum - 1, reverseI = 0;

    for(int i = 0; i < scanNum; i++)
    {
        for(int j = 0; j < scanNum; j++)
        {
            scanf("%d", &array[i][j]);

            if(i == j)
            {
                sumOne += array[i][j];
            }
        }

        sumTwo += array[reverseI++][reverseJ--];
    }

    int sumDiagonalDifference = 0;

    if(sumOne < sumTwo)
    {
        sumDiagonalDifference = sumTwo - sumOne;
    }
    else
    {
        sumDiagonalDifference = sumOne - sumTwo;
    }

    printf("%d", sumDiagonalDifference);

    return 0;
}
