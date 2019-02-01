#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a[n];

    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = n; i >= 1; i--)
    {
        printf("%d", a[i]);

        if(i > 1)
        {
            printf(" ");
        }
    }

    return 0;
}
