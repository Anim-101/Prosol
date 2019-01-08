/*
Problem ID 2: Even Fibonacci Numbers
*/

#include<stdio.h>

int main()
{
    long long int lastLimit = 4000000;
    long long int firstEven = 0;
    long long int secondEven = 2;
    long long int newEven = 0;
    long long int sumEven = firstEven + secondEven;

    while(secondEven <= lastLimit)
    {
        newEven = 4*secondEven + firstEven;

        if(newEven > lastLimit)
        {
            break;
        }

        firstEven = secondEven;
        secondEven = newEven;
        sumEven = sumEven + secondEven;
    }

    printf("Summation: %lld\n", sumEven);

    return 0;
}
