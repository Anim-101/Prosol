#include<stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    int array[num];

    int rotate;

    scanf("%d", &rotate);

    for(int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }

    int value = 0;

    while(rotate != 0)
    {
        value = array[0];

        for(int i = 0; i < num - 1; i++)
        {
            array[i] = array[i + 1];
        }

        array[num - 1] = value;

        rotate--;
    }

    for(int i = 0; i < num; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
