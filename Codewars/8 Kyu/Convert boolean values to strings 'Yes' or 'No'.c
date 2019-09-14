#include<stdio.h>
#include<string.h>

const char *bool_to_word (int value)
{
    if(value == 0)
    {
        return "No";
    }
    else
    {
        return "Yes";
    }
}

int main()
{
    printf("%s", bool_to_word(1));

    return 0;
}
