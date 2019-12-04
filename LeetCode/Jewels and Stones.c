#include<stdio.h>

int numJewelsInStones(char * J, char *S)
{
    int count = 0;

    int i = 0, k = 0;

    while(J[i] != '\0')
    {
        while(S[k] != '\0')
        {
            if(J[i] == S[k])
            {
                count++;
            }

            k++;
        }

        k = 0;

        i++;
    }

    return count;
}

int main()
{
    printf("%d", numJewelsInStones("z", "ZZ"));

    return 0;
}
