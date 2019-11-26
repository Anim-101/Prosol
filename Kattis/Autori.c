#include<stdio.h>

int main()
{
    char array[100];

    char arrayAutori[20];

    gets(array);

    int i = 0;

    int j = 0;

    arrayAutori[j++] = array[i++];

    while(array[i] != '\0')
    {
        if(array[i] == '-')
        {
            arrayAutori[j++] = array[i + 1];
        }

        i++;
    }

    arrayAutori[j] = '\0';

    j = 0;

    while(arrayAutori[j] != '\0')
    {
        printf("%c", arrayAutori[j]);

        j++;
    }

    return 0;
}
