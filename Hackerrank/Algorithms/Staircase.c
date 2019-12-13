#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int last = n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j >= last)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }

        if(i != n)
        {
            printf("\n");
        }

        last--;
    }

    return 0;
}
