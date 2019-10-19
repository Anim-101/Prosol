#include<stdio.h>

int simple_multiplication(int number)
{
    if(number % 2 != 0)
    {
        return number * 9;
    }
    else
    {
        return number * 8;
    }
}

int main()
{
    printf("Simple Multiplication: %d", simple_multiplication(3));

    return 0;
}
