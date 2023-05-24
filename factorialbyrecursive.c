#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
    
}

int main()
{
  int n,fact;
  printf("Enter the no of for factorial\n");
  scanf("%d",&n);
  fact =  factorial(n);
  printf("factorial is %d",fact);
  
    return 0;
}