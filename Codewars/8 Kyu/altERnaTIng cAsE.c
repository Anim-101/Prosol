#include<stdio.h>

char *to_alternating_case(const char *s)
{
    char *string = (char *) malloc(sizeof(char) * 200);

    int i = 0, text;

    while(s[i] != '\0')
    {
        if((int) (s[i]) >= 65 && (int) (s[i]) <= 90)
        {
            text = (int) (s[i]) + 32;

            string[i] = (char) (text);
        }
        else if((int) (s[i]) >= 97 && (int) (s[i]) <= 122)
        {
            text = (int) (s[i]) - 32;

            string[i] = (char) (text);
        }
        else
        {
            string[i] = s[i];
        }

        i++;
    }

    string[i] = '\0';

    return string;
}

int main()
{
    printf("Alternating Case String: %s", to_alternating_case("hElLo WoRlD"));

    return 0;
}
