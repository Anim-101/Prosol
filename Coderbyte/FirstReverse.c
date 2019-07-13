#include<stdio.h>
#include<string.h>

void FirstReverse(char str[])
{
    for(int i = strlen(str) - 1; i >= 0; i--)
    {
        putchar(str[i]);
    }
}

int main()
{
    FirstReverse(gets(stdin));

    return 0;
}
