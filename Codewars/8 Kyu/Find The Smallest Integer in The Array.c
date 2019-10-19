#include<stdio.h>
#include<stddef.h>

int find_smallest_int(int *vec, size_t len)
{
    int i = 0, min;

    min = vec[i];

    for(int i = 0; i < len; i++)
    {
        if(min >= vec[i])
        {
            min = vec[i];
        }
    }

    return min;
}

int main()
{
    int vec[10] = {34, -345, 25, 36, 25, 1, 2, 78, -9, 11};

    size_t len = 10;

    printf("Smallest Element in Array: %d", find_smallest_int(&vec, len));

    return 0;
}
