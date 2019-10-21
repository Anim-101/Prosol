#include<stddef.h>

int get_average(const int *marks, size_t count)
{
    size_t sum = 0;

    for(int i = 0; i < count; i++)
    {
        sum = sum + marks[i];
    }

    int avg = (int) sum / count;

    return avg;
}

int main()
{
    const int marks[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    size_t count = 10;

    printf("Mean of Given List: %d", get_average(marks, count));

    return 0;
}
