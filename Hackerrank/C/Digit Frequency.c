#include<stdio.h>

int main()
{
    int i = 0, array[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    char charInput;

    while(scanf("%c", &charInput) == 1)
    {
        if((int) charInput >= 48 || charInput <= 57)
        {
            i = (int) charInput - 48;

            array[i]++;
        }
    }

    for(int i = 0; i <= 9; i++)
    {

        printf("%d ", array[i]);
    }

    return 0;
}
