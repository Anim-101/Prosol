#include<stdio.h>
#include<stdlib.h>

char *rot13(const char *src)
{
    char *string = (char *) malloc(sizeof(char) * 40);

    int i = 0, charSrc;

    while(src[i] != '\0')
    {
        charSrc = (int) src[i];

        if(charSrc >= 65 && charSrc <= 90)
        {
            if(charSrc - 65 < 13)
            {
                string[i] = (char) (charSrc + 13);
            }
            else
            {
                string[i] = (char) (charSrc - 13);
            }
        }
        else if(charSrc >= 97 && charSrc <= 122)
        {
            if(charSrc - 97 < 13)
            {
                string[i] = (char) (charSrc + 13);
            }
            else
            {
                string[i] = (char) (charSrc - 13);
            }
        }
        else
        {
            string[i] = src[i];
        }

        i++;
    }

    string[i] = '\0';

    return string;
}

int main()
{
    printf("%s", rot13("Hello World"));

    return 0;
}
