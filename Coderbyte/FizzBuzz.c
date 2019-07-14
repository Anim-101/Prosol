#include <stdio.h> 
#include <string.h>

void FizzBuzz(int num) { 
  
  // code goes here  
  
  for(int i = 1; i <= num; i++)
  {
      if(i != num)
      {
          if((i % 3 == 0) && (i % 5 == 0))
          {
              printf("FizzBuzz");
          }
          else if(i % 3 == 0)
          {
              printf("Fizz");
          }
          else if(i % 5 == 0)
          {
              printf("Buzz");
          }
          else
          {
              printf("%d", i);
          }
          
          printf(" ");
      }
      else
      {
          if((i % 3 == 0) && (i % 5 == 0))
          {
              printf("FizzBuzz");
          }
          else if(i % 3 == 0)
          {
              printf("Fizz");
          }
          else if(i % 5 == 0)
          {
              printf("Buzz");
          }
          else
          {
              printf("%d", i);
          }
      }
  }
}

int main(void) { 
  
  // keep this function call here
  FizzBuzz(gets(stdin));
  return 0;
}
