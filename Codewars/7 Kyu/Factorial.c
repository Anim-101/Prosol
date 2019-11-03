#include<stdio.h>

int factorial(int n)
{
    int fact = 1;

    if(n < 0 || n > 12)
    {
        return -1;
    }
    else if(n == 0)
    {
        return 1;
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }

        return fact;
    }
}

int main()
{
    printf("%d", factorial(5));

    return 0;
}
