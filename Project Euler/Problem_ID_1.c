/*
Problem ID 1: Multiple of 3 and 5
*/

#include<stdio.h>

int main()
{
    int sum=0;

    for(int i=1; i<1000; i++)
    {
        if((i%3 == 0) || (i%5 == 0))
           {
               printf("%d\n",i);
               sum=sum+i;
           }
    }

    printf("Summation: %d",sum);

    return 0;
}
