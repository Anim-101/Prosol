#include<stdio.h>

int get_sum(int a, int b)
{
    int sum = 0;

    if(a == b)
    {
        return a;
    }
    else
    {
        if(a < b)
        {
            for(int i = a; i <= b; i++)
            {
                sum = sum + i;
            }

            return sum;
        }
        else
        {
            for(int i = b; i <= a; i++)
            {
                sum = sum + i;
            }

            return sum;
        }
    }
}

int main()
{
    printf("%d", get_sum(-1, 2));

    return 0;
}
