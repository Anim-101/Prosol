#include<stdio.h>

int find_nth_term(int n, int a, int b, int c)
{
    int i = 3, sum = 0;

    while(i < n)
    {
        sum = 0;

        sum = a + b + c;

        a = b;

        b = c;

        c = sum;

        i++;
    }

    return c;
}


int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);

    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);

    return 0;
}
