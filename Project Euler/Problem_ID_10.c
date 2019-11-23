/*
Problem ID 10: Summation of primes
*/

#include<stdio.h>

int main()
{
    long long int sum = 0;

    long long int million = 2000000;

    long long primeChecker = 0;

    int flag = 0;

    for(long long int i = 2; i < million; i++)
    {
        primeChecker = (long long int) (i / 2);

        flag = 1;

        for(long long int j = 2; j <= primeChecker; j++)
        {
            if(i % j == 0)
            {
                flag = 0;

                break;
            }
        }

        if(flag == 1)
        {
            sum = sum + i;
        }
    }

    printf("%lld", sum);

    return 0;
}
