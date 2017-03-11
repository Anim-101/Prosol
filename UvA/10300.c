/* Problem Id : 10300
   Problem    : Ecological Premium
*/
#include<stdio.h>
int main ()
{
    int test,i=0,farmer,j,k,premium;
    long arr[3];
    scanf("%d",&test);
    while (i<test)
    {
        premium=0;
        scanf("%d",&farmer);
        for (j=0;j<farmer;j++)
        {
            for (k=0;k<3;k++)
            {
                scanf("%ld",&arr[k]);
            }
            premium=premium+(arr[0]*arr[2]);
        }
        printf("%d\n",premium);
        i++;
    }
}
