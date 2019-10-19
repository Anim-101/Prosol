#include<stdio.h>

int summation(int num)
{
    return (num * (num + 1)) / 2;
}

int main()
{
    printf("Summation: %d", summation(5));

    return 0;
}
