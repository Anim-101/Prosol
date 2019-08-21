/* Problem Id : 621
   Problem    : Secret Research
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n;

    char asciiString[1000];

    scanf("%d", &n);

    while(n--)
    {
        scanf("%999s", asciiString);

        int length = strlen(asciiString);

        if(length == 1)
        {
            if((asciiString[0] == '1') || (asciiString[0] == '4'))
            {
                printf("+\n");
            }
        }
        else if(length == 2)
        {
            if((asciiString[0] == '7') && (asciiString[1] == '8'))
            {
                printf("+\n");
            }
        }
        else if(length >= 3)
        {
            if((asciiString[length -2] == '3') && (asciiString[length - 1] == '5'))
            {
                printf("-\n");
            }
            else if((asciiString[0] == '9') && (asciiString[length - 1] == '4'))
            {
                printf("*\n");
            }
            else if((asciiString[0] == '1') && (asciiString[1] == '9') && (asciiString[2] == '0'))
            {
                printf("?\n");
            }
            else
            {
                printf("?\n");
            }
        }
    }

    return 0;
}
