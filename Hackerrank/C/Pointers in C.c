#include<stdio.h>

void update(int *a, int *b)
{
    int valA = *a, valB = *b;

    if(valA > valB)
    {
        *a = valA + valB;

        *b = valA - valB;
    }
    else
    {
        *a = valA + valB;

        *b = valB - valA;
    }
}

int main()
{
    int a, b;

    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);

    update(pa, pb);

    printf("%d\n%d", a, b);

    return 0;
}
