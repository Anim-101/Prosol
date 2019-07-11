#include<stdio.h>

void update(int *a, int *b)
{

    int valA = *a;

    int valB = *b;

    int sum = valA + valB;

    *a = sum;

    int absolute = valA - valB;

    if(absolute < 0)
    {
        absolute = 0 - absolute;
    }

    *b = absolute;
}

int main()
{
    int a, b;

    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);

    update(pa, pb);

    printf("%d\n%d", a, b);
}
