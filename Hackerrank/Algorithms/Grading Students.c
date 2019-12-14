#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int num = 0;

    for(int i = 0; i < n; i++)
    {
        num = array[i] % 5;

        if(num >= 3 && array[i] >= 38)
        {
            array[i] = array[i] + (5 - num);

            printf("%d\n", array[i]);
        }
        else
        {
            printf("%d\n", array[i]);
        }
    }

    return 0;
}
