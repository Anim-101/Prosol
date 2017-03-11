/* Problem Id : 11547
   Problem    : Automatic Answer
*/
#include<stdio.h>
int main ()
{
    int test,l=1,num,val;
    scanf("%d",&test);
    while(l<=test)
    {
        val=0;
        scanf("%d",&num);
        val=num*567;
        val=val/9;
        val=val+7492;
        val=val*235;
        val=val/47;
        val=val-498;
        val=val%100;
        val=val/10;
        if (val<0)
        {
            val= val*(-1);
            printf("%d\n",val);
        }
        else
        {
             printf("%d\n",val);
        }
        l++;

    }
    return 0;
}
