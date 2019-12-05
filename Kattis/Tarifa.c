#include<stdio.h>

int main()
{
    int givenMB;

    scanf("%d", &givenMB);

    int months;

    scanf("%d", &months);

    int bandwidth;

    int remainingBandwidth = 0;

    for(int i = 0; i < months; i++)
    {
        scanf("%d", &bandwidth);

        remainingBandwidth = remainingBandwidth + (givenMB - bandwidth);
    }

    printf("%d", remainingBandwidth + givenMB);

    return 0;
}
