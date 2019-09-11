#include<stdbool.h>
#include<math.h>

bool is_square(int n)
{
    if(n < 0)
    {
        return false;
    }
    else if(n == 0)
    {
        return true;
    }
    else
    {
        double res = sqrt(n);

        if(res - floor(res) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    printf("%d",is_square(16));

    return 0;
}
