/* Problem Id : 10302
   Problem    : Summation of Ploynomials
*/
#include<stdio.h>
int main ()
{

    long long int num,sum;
    while ((scanf("%lld",&num))!=EOF)
    {

        sum=((num*num*(num+1)*(num+1))/4);
        printf("%lld\n",sum);
    }
    return 0;
}
