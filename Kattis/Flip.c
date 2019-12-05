#include<stdio.h>

int main()
{
    int numberOne, numberTwo;

    scanf("%d %d", &numberOne, &numberTwo);

    int checkOne = 0, checkTwo = 0;

    if(numberOne < 0)
    {
        checkOne = 1;

        numberOne = 0 - numberOne;
    }

    if(numberTwo < 0)
    {
        checkTwo = 1;

        numberTwo = 0 - numberTwo;
    }

    int newNumberOne, newNumberTwo;

    newNumberOne = ((numberOne % 10) * 100);

    numberOne = numberOne / 10;

    newNumberOne = newNumberOne + ((numberOne % 10) * 10);

    numberOne = numberOne / 10;

    newNumberOne = newNumberOne + numberOne;

    newNumberTwo = ((numberTwo % 10) * 100);

    numberTwo = numberTwo / 10;

    newNumberTwo = newNumberTwo + ((numberTwo % 10) * 10);

    numberTwo = numberTwo / 10;

    newNumberTwo = newNumberTwo + numberTwo;

    if(checkOne == 1 || checkTwo == 1)
    {
        if(checkOne == 1 && checkTwo == 1)
        {
            newNumberOne = 0 - newNumberOne;

            newNumberTwo = 0 - newNumberTwo;
        }
        else if(checkOne == 1 && checkTwo == 0)
        {
            newNumberOne = 0 - newNumberOne;
        }
        else if(checkOne == 0 && checkTwo == 1)
        {
            newNumberTwo = 0 - newNumberTwo;
        }
    }

    if(newNumberOne < newNumberTwo)
    {
        printf("%d", newNumberTwo);
    }
    else
    {
        printf("%d", newNumberOne);
    }

    return 0;
}
