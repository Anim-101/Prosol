#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool is_palindrome(char *str_in)
{
    int low = 0;

    int high = strlen(str_in) - 1;

    while(high > low)
    {
        if(str_in[low] != str_in[high])
        {
            if((int) str_in[low] - (int) str_in[high] == 32 || (int) str_in[low] - (int) str_in[high] == -32)
            {
                low++;

                high--;
            }
            else
            {
                return false;
            }
        }
        else
        {
            low++;

            high--;
        }
    }

    return true;
}

int main()
{
    if(is_palindrome("Abbccbba"))
    {
        printf("Yay");
    }
    else
    {
        printf("nope");
    }

    return 0;
}
