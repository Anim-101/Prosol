/* Problem ID : 272
   Problem    : TeX Quotes
*/
#include<stdio.h>
#include<string.h>
int main ()
{
    long int i,length,count=0;
    char str[100000];
    while (gets(str))
    {
        length=strlen(str);
        for (i=0;i<length;i++)
        {
            if (str[i]=='"')
            {
                count++;
                if (count%2==0)
                {
                    printf("''");
                }
                else
                {
                    printf("``");
                }
            }
            else
            {
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
