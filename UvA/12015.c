/* Problem Id : 12015
   Problem    : Google is Felling Lucky
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int test;

    scanf("%d", &test);

    char urlOne[100], urlTwo[100], urlThree[100], urlFour[100], urlFive[100], urlSix[100], urlSeven[100], urlEight[100], urlNine[100], urlTen[100];

    int urlArray[10];

    int countTest = 0;

    while(test--)
    {
        int i = 0;

        countTest++;

        scanf("%s %d", urlOne, &urlArray[i + 0]);
        scanf("%s %d", urlTwo, &urlArray[i + 1]);
        scanf("%s %d", urlThree, &urlArray[i + 2]);
        scanf("%s %d", urlFour, &urlArray[i + 3]);
        scanf("%s %d", urlFive, &urlArray[i + 4]);
        scanf("%s %d", urlSix, &urlArray[i + 5]);
        scanf("%s %d", urlSeven, &urlArray[i + 6]);
        scanf("%s %d", urlEight, &urlArray[i + 7]);
        scanf("%s %d", urlNine, &urlArray[i + 8]);
        scanf("%s %d", urlTen, &urlArray[i + 9]);

        int max = 0;

        int google = 0;

        for(google = 0; google < 10; google++)
        {
            if(max < urlArray[google])
            {
                max = urlArray[google];
            }
        }

        i = 0;

        printf("Case #%d:\n", countTest);

        if(urlArray[i + 0] == max)
        {
            printf("%s\n", urlOne);
        }

        if(urlArray[i + 1] == max)
        {
            printf("%s\n", urlTwo);
        }

        if(urlArray[i + 2] == max)
        {
            printf("%s\n", urlThree);
        }

        if(urlArray[i + 3] == max)
        {
            printf("%s\n", urlFour);
        }

        if(urlArray[i + 4] == max)
        {
            printf("%s\n", urlFive);
        }

        if(urlArray[i + 5] == max)
        {
            printf("%s\n", urlSix);
        }

        if(urlArray[i + 6] == max)
        {
            printf("%s\n", urlSeven);
        }

        if(urlArray[i + 7] == max)
        {
            printf("%s\n", urlEight);
        }

        if(urlArray[i + 8] == max)
        {
            printf("%s\n", urlNine);
        }

        if(urlArray[i + 9] == max)
        {
            printf("%s\n", urlTen);
        }
    }
    return 0;
}
