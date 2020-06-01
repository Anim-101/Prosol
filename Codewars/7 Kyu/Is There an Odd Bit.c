#include<stdio.h>

int any_odd(unsigned x)
{
    int i = 1, binary = 0, rem = 0, count = 1;

    while(x != 0)
    {
        rem = x % 2;

        if(rem == 1 && count % 2 == 0)
        {
            return 1;

            break;
        }

        count++;

        binary = rem + i;

        i = i * 10;

        x = x / 2;
    }

    return 0;
}

int main()
{
    printf("Is There an Odd Bit? : %d", any_odd(2863311530));
}
