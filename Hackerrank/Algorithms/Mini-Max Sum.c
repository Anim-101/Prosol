#include<stdio.h>

int main()
{
    int number = 5;

    long int array[number];

    for(int i = 0; i < number; i++)
    {
        scanf("%ld", &array[i]);
    }

    long int min = 0, max = 0, sum = 0;

    for(int i = 0; i < number; i++)
    {
        sum = 0;

        for(int j = 0; j < number; j++)
        {
            if(i != j)
            {
                sum += array[j];
            }
        }

        if(i == 0)
        {
            min = sum;

            max = sum;
        }

        if(max < sum)
        {
            max = sum;
        }

        if(min > sum)
        {
            min = sum;
        }
    }

    printf("%d %d", min, max);

    return 0;
}
