#include<stdio.h>

const char* greet()
{
    return "hello world!";
}

int main()
{
    printf("%s", greet());

    return 0;
}
