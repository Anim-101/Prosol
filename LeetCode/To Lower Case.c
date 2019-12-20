#include<stdio.h>
#include<stdlib.h>

char *toLowerCase(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    char * string = (char *) malloc(sizeof(char) * i + 1);

    i = 0;

    while(str[i] != '\0')
    {
        if((int) str[i] >= 65 && (int) str[i] <= 90)
        {
            string[i] = (char) ((int) str[i] + 32);
        }
        else
        {
            string[i] = str[i];
        }

        i++;
    }

    string[i] = '\0';

    return string;
}

int main()
{
    printf("%s", toLowerCase("Hello World"));
}
