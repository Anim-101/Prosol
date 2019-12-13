#include<stdio.h>
#include<stdlib.h>

int simpleArraySum(int ar_count, int *ar)
{
    int sum = 0;

    for(int i = 0; i < ar_count; i++)
    {
        sum += ar[i];
    }

    return sum;
}

int main()
{
    int ar_count = 6;

    int *ar = (int *) malloc(ar_count * (sizeof(int)));

    for(int i = 0; i < ar_count; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("%d", simpleArraySum(ar_count, ar));

    return 0;
}
