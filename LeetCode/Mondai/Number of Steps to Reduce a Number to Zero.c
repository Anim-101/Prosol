#include<stdio.h>

int numberOfSteps(int num)
{
    int steps = 0;

    while(num != 0)
    {
        if(num == 1)
        {
            num = num - 1;
        }
        else if(num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = num - 1;
        }

        steps++;
    }

    return steps;
}

int main()
{
    printf("Steps: %d", numberOfSteps(123));

    return 0;
}
