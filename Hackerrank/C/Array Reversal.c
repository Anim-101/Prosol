#include<stdio.h>

int main()
{
    int size;

    scanf("%d", &size);

    int array[size];

    for(int i = 0, j = size - 1; i < size; i++, j--)
    {
        scanf("%d",&array[j]);
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
