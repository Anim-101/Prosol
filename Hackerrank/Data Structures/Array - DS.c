// Complete the reverseArray function below.

// Please store the size of the integer array to be returned in result_count pointer. For example,
// int a[3] = {1, 2, 3};
//
// *result_count = 3;
//
// return a;
//

int* reverseArray(int a_count, int* a, int* result_count) 
{
    int * array;

    array = (int *) malloc(sizeof(int) * a_count);

    for(int i = 0, j = a_count - 1; i < a_count; i++, j--)
    {
        array[j] = a[i];
    }

    *result_count = a_count;

    return array;
}
