#include<stdio.h>

int other_angle(int a, int b)
{
    return 180 - (a + b);
}

int main()
{
    printf("%d", other_angle(30, 60));

    return 0;
}
