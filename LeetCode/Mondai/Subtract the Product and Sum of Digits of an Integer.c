#include<stdio.h>

int subtractProductAndSum(int n)
{
    int sum = 0, product = 1;

    while(n >= 1)
    {
        if(n >= 10)
        {
            sum += n % 10;

            product *= n % 10;
        }
        else
        {
            sum += n;

            product *= n;

            break;
        }

        n = n / 10;
    }

    return product - sum;
}

int main()
{
    printf("%d", subtractProductAndSum(4421));

    return 0;
}
