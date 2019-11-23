/*
Problem ID 6: 	Sum square difference
*/

#include<stdio.h>
#include<math.h>

int main()
{
    int sumSquare = 0;

    int squareSum = 0;

    for(int i = 1; i <= 100; i++)
    {
        sumSquare = sumSquare + round(pow(i, 2));

        squareSum = squareSum + i;
    }

    squareSum = round(pow(squareSum, 2));

    printf("%d", squareSum - sumSquare);

    return 0;
}
