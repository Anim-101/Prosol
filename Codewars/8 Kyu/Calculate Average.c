#include<stdio.h>

double find_average(double *array, int length)
{
    double sum = 0;

    for(int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }

    double avg = sum / length;

    return avg;
}

int main()
{
    double array[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    printf("Average of Given List: %f", find_average(array, 10));

    return 0;
}
