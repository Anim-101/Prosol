#include<stdio.h>

float divide_nums(int x, int y)
{
    return (float) x / y;
}

int main()
{
    printf("Float Value: %.2f", divide_nums(4, 10));

    return 0;
}
