#include<stdbool.h>
#include<stddef.h>

size_t count_sheep(const bool *sheep, size_t count)
{
    size_t sheepCounter = 0;

    for(int i = 0; i < count; i++)
    {
        if(sheep[i] == true)
        {
            sheepCounter++;
        }
    }

    return sheepCounter;
}

int main()
{
    const bool sheep[10] = {true, true, false, true, false, true, false, true, true, false};

    printf("Counting of Sheep: %d", count_sheep(sheep, 10));
}
