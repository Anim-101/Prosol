#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int secondInteger;
    double secondDouble;
    char secondString[100];

    scanf("%d", &secondInteger);
    scanf("%lf", &secondDouble);
    getchar();
    gets(secondString);

    printf("%d\n", i + secondInteger);
    printf("%.1lf\n", d + secondDouble);

    char addChar[150] = "";
    strcat(addChar, s);
    strcat(addChar, secondString);
    puts(addChar);

    return 0;
}
