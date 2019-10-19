#include<stdio.h>

bool is_uppercase(const char *source)
{
    int i = 0, returnRes = 1;

    while(source[i] != '\0')
    {
        if((int) (source[i]) >= 97 && (int) (source[i]) <= 122)
        {
            returnRes = 0;

            break;
        }

        i++;
    }

    return returnRes;
}

int main()
{
    if(returnRes)
    {
        printf("It is UpperCase");
    }
    else
    {
        printf("It is not UpperCase");
    }

    return 0;
}
