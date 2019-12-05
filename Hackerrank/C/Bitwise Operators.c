#include<stdio.h>

void calculate_the_maximum(int n, int k)
{
    int maxAnd = 0, maxOr = 0, maxXor = 0;

    for(int i = 1; i < n; i++)
    {
       for(int j = i + 1; j <= n; j++)
       {
            if(((i & j) < k) && ((i & j) > maxAnd))
            {
                maxAnd = i & j;
            }

            if(((i | j) < k) && ((i | j) > maxOr))
            {
                maxOr = i | j;
            }

            if(((i ^ j) < k) && ((i ^ j) > maxXor))
            {
                maxXor = i ^ j;
            }
        }
    }

    printf("%d\n%d\n%d", maxAnd, maxOr, maxXor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);

    return 0;
}
