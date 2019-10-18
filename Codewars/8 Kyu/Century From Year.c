#include<stdio.h>

int centuryFromYear(int year)
{
    int century = 0;

    if(year % 100 == 0)
    {
        century = year / 100;
    }
    else
    {
        century = year / 100 + 1;
    }

    return century;
}

int main()
{
    printf("%d", centuryFromYear(1900));

    return 0;
}
