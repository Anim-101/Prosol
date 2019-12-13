#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int array[n];

    int pos = 0, neg = 0, zero = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if(array[i] == 0)
        {
            zero++;
        }
        else if(array[i] < 0)
        {
            neg++;
        }
        else if(array[i] > 0)
        {
            pos++;
        }
    }

    double posPor = (double) pos / n;

    double negPor = (double) neg / n;

    double zeroPor = (double) zero / n;

    printf("%.7f\n%.7f\n%.7f", posPor, negPor, zeroPor);

    return 0;
}
