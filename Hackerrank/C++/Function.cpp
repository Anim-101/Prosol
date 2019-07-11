#include<iostream>
#include<stdio.h>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int greatest = a;


    for(int i = 0; i <= 3; i++)
    {
        if(i == 0)
        {
            if(a >= greatest)
            {
                greatest = a;
            }
        }

        if(i == 1)
        {
            if(b >= greatest)
            {
                greatest = b;
            }
        }

        if(i == 2)
        {
            if(c >= greatest)
            {
                greatest = c;
            }
        }

        if(i == 3)
        {
            if(d >= greatest)
            {
                greatest = d;
            }
        }
    }

    return greatest;
}

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int answer = max_of_four(a, b, c, d);

    printf("%d", answer);

    return 0;
}
