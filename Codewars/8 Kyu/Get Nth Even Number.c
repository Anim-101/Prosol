#include<stdio.h>

int nth_even(int n)
{
    n = (n * 2) - 2;

    return n;
}


int main()
{
    printf("Even Number is: %d", nth_even(1298734));

    return 0;
}
