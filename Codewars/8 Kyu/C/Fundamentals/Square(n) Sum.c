#include<stddef.h>

int square_sum(const int *values, size_t count)
{
    int sum = 0;

    for(int i = 0; i < count; i++)
    {
        sum = sum + (values[i] * values[i]);
    }

    return sum;
}

int main()
{
    size_t count = 10;

    const int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d", square_sum(values, count));

    return 0;
}
