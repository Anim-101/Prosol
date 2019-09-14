#include<stdio.h>

int makeNegative(int num)
{
    if(num <= 0)
    {
        return num;
    }
    else
    {
        return 0 - num;
    }
}

int main()
{
    printf("%d", makeNegative(10));

    return 0;
}
