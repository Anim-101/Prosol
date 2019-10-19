#include<stdio.h>

int goals(int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals)
{
    return laLigaGoals + copaDelReyGoals + championsLeagueGoals;
}

int main()
{
    printf("Messi's Total Goals: %d", goals(37, 1, 12));

    return 0;
}
