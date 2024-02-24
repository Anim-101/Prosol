#include<stdio.h>

void reverseString(char *s, int size)
{
    char temp, *beginS, *endS;

    beginS = s;

    endS = s + ((size - 1) * (sizeof(char)));

    for(int i = 0; i < (int) (size / 2); i++)
    {
        temp = *beginS;

        *beginS = *endS;

        *endS = temp;

        beginS++;

        endS--;
    }
}

int main()
{
    char s[11] = "Hello World";

    reverseString(s, 11);

    printf("Reverse String: %s", s);

    return 0;
}
