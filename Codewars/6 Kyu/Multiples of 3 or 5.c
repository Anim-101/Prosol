#include<stdio.h>

int solution(int number)
{
    int sum = 0, check = 0;

    number--;

    while(number != 0)
    {
        check = 0;

        if(number % 3 == 0 && number % 5 == 0)
        {
            sum = sum + number;

            check = 1;
        }

        if(check == 0)
        {
            if(number % 3 == 0 || number % 5 == 0)
            {
                sum = sum + number;
            }
        }

        if(number < 3)
        {
            break;
        }

        number--;
    }

    return sum;
}

int main()
{
    printf("Sum of Multiple of 3 or 5: %d", solution(10));

    return 0;
}
