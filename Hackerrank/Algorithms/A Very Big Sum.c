#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    long int array[n], sum = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%ld", &array[i]);

        sum += array[i];
    }

    printf("%ld", sum);

    return 0;
}
