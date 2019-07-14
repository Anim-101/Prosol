#include <stdio.h> 
#include <string.h>

void PrimeTime(int num) { 
  
    if(num == 1)
    {
        printf("true");
    }
    else if(num == 2)
    {
        printf("true");
    }
    else if(num % 2 == 0)
    {
        printf("false");
    }
    else if(num == 3 || num == 5 || num == 7)
    {
        printf("true");
    }
    else if(num % 3 != 0)
    {
        printf("true");
    }
    else if(num % 5 != 0)
    {
        printf("true");
    }
    else if(num % 7 != 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
            
}

int main(void) { 
  
  // keep this function call here
  PrimeTime(gets(stdin));
  return 0;
    
}
