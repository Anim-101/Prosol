#include<stdio.h>
#include<string.h>

int main()
{
    char ch;
    char s[100];
    char sen[100];

    scanf("%c", &ch);

    scanf("\n");

    scanf("%[^\n]%*c", s);

    scanf("\n");

    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);

    printf("%s\n", s);

    printf("%s", sen);

    return 0;
}
