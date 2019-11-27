#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int i = 0;

    while(n != 0)
    {
        i++;

        if(n == 1)
        {
            printf("%d Abracadabra", i);
        }
        else
        {
            printf("%d Abracadabra\n", i);
        }

        n--;
    }

    return 0;
}
