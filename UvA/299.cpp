/* Problem Id : 299
   Problem    : Train Swapping
*/
#include<stdio.h>>
int main ()
{
    int test,i,l=1,k,p,sw,train[50],temp;
    scanf("%d",&test);
    while(l<=test)
    {
        k=0;
        scanf("%d",&sw);
        for (i=1;i<=sw;i++)
        {
            scanf("%d",&train[i]);
        }
        for (i=1;i<=sw;i++)
        {
            for (p=1;p<=sw-1;p++)
            {
                if (train[p]>train[p+1])

               {
                    temp=train[p];
                    train[p]=train[p+1];
                    train[p+1]=temp;
                    k++;
                }

            }

        }
        printf("Optimal train swapping takes %d swaps.\n",k);
        l++;
    }
    return 0;
}
