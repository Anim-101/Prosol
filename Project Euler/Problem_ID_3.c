/*
Problem ID 3: Largest Prime Number
*/

#include<stdio.h>

int main()
{
    long long int number = 600851475143;
    long long int factor = 2;

    while(1)
    {
        if( number == factor)
        {
            break;
        }
        else
        {

            if(number % factor == 0)
            {
                number = number / factor;
                factor = 2;
            }
            else
            {
                factor++;
            }
        }
    }

    printf("Largest Prime Factor: %lld", factor);

    return 0;
}
