#include<stddef.h>

int possitive_sum(const int *values, size_t count)
{
    int sum = 0;

    for(int i = 0; i < count; i++)
    {
        if(values[i] >= 0)
        {
            sum = sum + values[i];
        }
    }

    return sum;
}

int main()
{
    size_t count = 10;

    const int values[10] = {-1, 1, -2, 2, 3, -4, 5, -6, 6, 10};

    printf("%d", possitive_sum(values, count));

    return 0;
}
