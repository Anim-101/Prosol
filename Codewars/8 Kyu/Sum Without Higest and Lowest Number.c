#include<stdio.h>

int sum(int *numbers, int numbersCount)
{
    if(numbersCount > 1)
    {
        int i = 0, min = numbers[i], max = numbers[i], sum = 0;

        while(i < numbersCount)
        {
            if(min > numbers[i])
            {
                min = numbers[i];
            }

            if(max < numbers[i])
            {
                max = numbers[i];
            }

            sum = sum + numbers[i];

            i++;
        }

            return sum - (min + max);
        }
        else
        {
            return 0;
        }
}

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Sum without Highest and Lowest Number from List: %d", sum(numbers, 10));

    return 0;
}
