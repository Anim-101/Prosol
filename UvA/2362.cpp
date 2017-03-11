/* Problem Id : 2362
   Problem    : Financial Managemnet
*/
#include<stdio.h>
int main ()
{
    float val[12],avg,sum=0.0;
    int i;
    while (1)
    {
        for (i=0;i<12;i++)
        {
            scanf("%f",&val[i]);
            sum=sum+val[i];
        }
        avg=sum/12;
        printf("$%0.2f",avg);
    }
    return 0;
}
