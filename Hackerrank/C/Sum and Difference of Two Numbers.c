#include<stdio.h>

int main()
{
    int intNumA, intNumB;

    float floatNumA, floatNumB;

    scanf("%d %d %f %f", &intNumA, &intNumB, &floatNumA, &floatNumB);

    printf("%d %d\n%.1f %.1f", intNumA + intNumB, intNumA - intNumB, floatNumA + floatNumB, floatNumA - floatNumB);

    return 0;
}
