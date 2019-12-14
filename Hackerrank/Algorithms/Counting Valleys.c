#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    char string [n];

    int valley = 0;

    char newLine = "\0";

    scanf("%c", &newLine);

    gets(string);

    int i = 0, count = 0, num = 0;

    while(string[i] != '\0')
    {
        if(string[i] == 'U')
        {
            valley++;
        }
        else if(string[i] == 'D')
        {
            valley--;
        }

        if(valley == 0 && string[i] == 'U')
        {
            count++;
        }

        i++;
    }

    printf("%d", count);

    return 0;
}
