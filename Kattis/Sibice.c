#include<stdio.h>
#include<math.h>

int main()
{
    int numberOfMatches;

    scanf("%d", &numberOfMatches);

    int matchWidth, matchHeight;

    scanf("%d %d", &matchWidth, &matchHeight);

    int diagonalOfMatches = (int) sqrt((matchWidth * matchWidth) + (matchHeight * matchHeight));

    int givenNumber;

    for(int i = 0; i < numberOfMatches; i++)
    {
        scanf("%d", &givenNumber);

        if(givenNumber <= diagonalOfMatches)
        {
            printf("DA\n");
        }
        else
        {
            printf("NE\n");
        }
    }

    return 0;
}
