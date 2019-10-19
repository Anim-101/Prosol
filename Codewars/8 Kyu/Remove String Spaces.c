#include<stdio.h>
#include<stdlib.h>

char *no_space(char *string)
{
    int i = 0, j = 0;

    char *str = (char *) malloc(sizeof(char) * 2000);

    while(string[i] != '\0')
    {
        str[j] = string[i];

        if(string[i] == ' ')
        {
            i = i + 1;
        }
        else
        {
            j++;

            i++;
        }
    }

    str[j] = '\0';

    return str;
}

int main()
{
    printf("%s", no_space("Hello World, This is Anim Akash. What are you Trying to say? World."));

    return 0;
}
