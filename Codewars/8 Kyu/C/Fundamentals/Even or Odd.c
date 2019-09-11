#include<stdio.h>

const char * even_or_odd(int number)
{
    if(number % 2 == 0)
    {
        return "Even";
    }
    else
    {
        return "Odd";
    }
}

int main()
{
    printf("%s", even_or_odd(10));

    return 0;
}
