/* Problem Id : 10696
   Proble,    : F91
*/
#include<stdio.h>
int main ()
{
    long int val;
    while ((scanf("%ld",&val)==1)&&val!=0)
    {
        if (val>100)
        {
            printf("f91(%ld) = %ld\n",val,val-10);
        }
        else if (val<=100)
        {
            printf("f91(%d) = 91\n",val);
        }
    }
    return 0;
}
