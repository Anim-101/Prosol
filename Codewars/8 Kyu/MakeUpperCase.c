#include<stdio.h>
#include<stdlib.h>

char *makeUpperCase(char *string)
{
    int i = 0, text;

    char *str = (char *) malloc(sizeof(char) * 200);

    while(string[i] != '\0')
    {
        if((int) string[i] >= 97 && (int) string[i] <= 122)
        {
            text = (int) string[i];

            str[i] = (char) (text - 32);
        }
        else
        {
            str[i] = string[i];
        }

        i++;
    }

    str[i] = '\0';

    return str;
}

int main()
{
    printf("Upper Case of Given Text: %s", makeUpperCase("1,2,3 hello world!"));

    return 0;
}
