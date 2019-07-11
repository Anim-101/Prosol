#include<stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    int arr[num];

    for(int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = num - 1; i >= 0; i--)
    {
        if(i != 0)
        {
            printf("%d ", arr[i]);
        }
        else if(i == 0)
        {
            printf("%d", arr[i]);
        }
    }
}
