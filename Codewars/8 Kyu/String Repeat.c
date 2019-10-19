#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *repeat_str(size_t count, const char *src)
{
    char *string = (char *) malloc(sizeof(char) * 2500);

    int i = 0, j = 0, k = 0;

    while(i < count)
    {
        k = 0;

        while(src[k] != '\0')
        {
            string[j] = src[k];

            j++;

            k++;
        }

        i++;
    }

    string[j] = '\0';

    return string;
}

int main()
{
    printf("%s", repeat_str(5, "Hello"));
}
