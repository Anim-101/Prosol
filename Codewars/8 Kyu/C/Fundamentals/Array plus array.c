#include<stddef.h>

long arr_plus_arr(const int *a, const int *b, size_t na, size_t nb)
{
    long int sum = 0;

    for(int i = 0; i < na; i++)
    {
        sum = sum + a[i];
    }

    for(int i = 0; i < nb; i++)
    {
        sum = sum + b[i];
    }

    return sum;
}

int main()
{
    size_t na = 10;

    size_t nb = 10;

    const int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    const int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%ld", arr_plus_arr(a, b, na, nb));

    return 0;
}
