#include<stdio.h>

int basic_op(char op, int value1 , int value2)
{
    if(op == '+')
    {
        return value1 + value2;
    }
    else if(op == '-')
    {
        return value1 - value2;
    }
    else if(op == '*')
    {
        return value1 * value2;
    }
    else if(op == '/')
    {
        return value1 / value2;
    }
}

int main()
{
    printf("After Basic Operation: %d", basic_op('+', 10, 20));

    return 0;
}
