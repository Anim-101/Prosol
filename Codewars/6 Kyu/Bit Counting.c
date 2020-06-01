#include<stddef.h>

size_t countBits(unsigned value)
{
    int i = 1, rem = 0, binary = 0, count = 0;

    while(value != 0)
    {
        rem = value % 2;

        if(rem == 1)
        {
            count++;
        }

        binary = rem + i;

        i = i * 10;

        value = value / 2;
    }

    return count;
}


int main()
{
    printf("1's in Given Number: %d", countBits(1234));

    return 0;
}
