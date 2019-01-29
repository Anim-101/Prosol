/* Problem Id : 12403
   Problem    : Save Setu
*/
#include<stdio.h>
int main()
{

    int iteration, sum = 0, donation =0;
    char donate[100];

    scanf("%d", &iteration);

    while(iteration--)
    {
        scanf("%s", &donate);

        if(strcmp(donate, "donate") == 0)
        {
            scanf("%d", &donation);

            sum += donation;
        }
        else
        {
            printf("%d\n", sum);
        }
    }
    return 0;
}
