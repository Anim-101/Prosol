#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int array[n];

    int max = 0, count = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if(i == 0)
        {
            max = array[i];
        }

        if(max == array[i])
        {
            count++;
        }
        else if(array[i] > max)
        {
            count = 1;

            max = array[i];
        }
    }

    printf("%d", count);

    return 0;
}
