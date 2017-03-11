/* Problem Id : 458
   Problem    : The Decoder
*/
#include<stdio.h>
#include<string.h>
int main ()
{
    char str[100000];
    int i,length,val;
    while(gets(str))
    {
        length=strlen(str);
        for (i=0;i<length;i++)
        {
            val=(int)(str[i]);
            val=val-7;
            str[i]=(char)(val);
            printf("%c",str[i]);
        }
        printf("\n");
    }
}
