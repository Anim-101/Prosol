/* Problem Id : 100
   Problem    : The 3n+1 Problem
*/
#include<stdio.h>
int main ()
{
    int i,j,n,temp,val_i,val_j;
    int max_length,cycle;
    while(scanf("%d%d",&i,&j)==2 && i>0 && j>0)
    {
        max_length=0;
        val_i=i;
        val_j=j;
        if (i>j)
        {
            temp=i;
            i=j;
            j=temp;
        }
        while (i<=j)
        {
            n=i;
            cycle=1;
            while (n!=1)
               {
                    if (n%2!=0)
                        {
                            n=(3*n)+1;
                        }
                    else
                        {
                            n=n/2;
                        }
                        cycle++;
                }
                if(cycle >max_length)
                    {
                        max_length=cycle;
                    }

                i++;
        }
         printf("%d %d %d\n",val_i,val_j,max_length);
        }
    return 0;
}
