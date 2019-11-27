#include<stdio.h>

int main()
{
    int x, y, n;

    scanf("%d %d %d", &x, &y, &n);

    int num = 1;

    while(num <= n )
    {
        if(num != n)
        {
            if((num % x == 0) && (num % y == 0))
            {
                printf("FizzBuzz\n");
            }
            else if(num % x == 0)
            {
                printf("Fizz\n");
            }
            else if(num % y == 0)
            {
                printf("Buzz\n");
            }
            else
            {
                printf("%d\n", num);
            }
        }
        else
        {
            if((num % x == 0) && (num % y == 0))
            {
                printf("FizzBuzz");
            }
            else if(num % x == 0)
            {
                printf("Fizz");
            }
            else if(num % y == 0)
            {
                printf("Buzz");
            }
            else
            {
                printf("%d", num);
            }
        }

        num++;
    }
}
