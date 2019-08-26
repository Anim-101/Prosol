#include<stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        sum = sum + (num % 10);

        num = num / 10;
    }

    printf("%d", sum);

    return 0;
}
