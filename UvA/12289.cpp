/* Problem Id : 12289
   Problem    : One-Two-Three
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int test;

    scanf("%d", &test);

    while(test--)
    {

        char arr[7];

        scanf("%s", arr);

        if(strlen(arr) == 5)
        {
            printf("3\n");
        }
        else if(strlen(arr) == 3)
        {
            if((arr[0] == 'o' && arr[1] == 'n') || (arr[0] == 'n' && arr[1] == 'o') || (arr[1] == 'n' && arr[2] == 'e') || (arr[1] == 'e' && arr[2] == 'n') || (arr[0] == 'o' && arr[2] == 'e') || (arr[0] == 'e' && arr[2] == 'o'))
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
    }

    return 0;
}