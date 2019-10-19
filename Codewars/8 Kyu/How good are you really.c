#include<stdio.h>

int better_than_average(int class_points[], int class_size, int your_points)
{
    int average, sum = 0;

    for(int i = 0; i < class_size; i++)
    {
        sum = sum + class_points[i];
    }

    average = sum / class_size;

    if(average < your_points)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int class_points[10] = {20, 40, 50, 20, 10, 30, 40, 56, 89, 80};

    int class_size = 10;

    if(better_than_average(class_points, class_size, 40) == 1)
    {
        printf("You are Better");
    }
    else
    {
        printf("You are not Better");
    }
}
