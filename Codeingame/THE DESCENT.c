#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    while(1)
    {
        int max = 0;

        int index = 0;

        for(int i = 0; i < 8; i++)
        {
            int mountain_h;

            scanf("%d", &mountain_h);

            if(max < mountain_h)
            {
                max = mountain_h;

                index = i;
            }
        }

        printf("%d\n", index);
    }

    return 0;
}
