#include<stdio.h>

int main()
{
    int n;

    int k ;

    scanf("%d %d", &n, &k);

    int array[n];

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if((array[i] + array[j]) % k == 0)
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
