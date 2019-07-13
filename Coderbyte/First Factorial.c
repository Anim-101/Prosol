#include<stdio.h>

void FirstFactorial(int num)
{
    unsigned int long fact = 1;

    unsigned int long i = 1;

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("%d", fact);
}

int main()
{
    FirstFactorial(gets(stdin));

    return 0;
}
