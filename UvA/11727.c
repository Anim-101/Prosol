#include<stdio.h>
int main()
{
    int num,count=1;
    int sal1,sal2,sal3;
    scanf("%d",&num);
    while(count<=num)
    {
        scanf("%d%d%d",&sal1,&sal2,&sal3);
        if((sal1>sal2 && sal1<sal3) || (sal1>sal3 && sal1<sal2))
        {
            printf("Case %d: %d\n",count,sal1);
        }
        else if((sal2>sal1 && sal2<sal3) || (sal2>sal3 && sal2<sal1))
        {
            printf("Case %d: %d\n",count,sal2);
        }
        else
        {
            printf("Case %d: %d\n",count,sal3);
        }
        count++;
    }
    return 0;
}
