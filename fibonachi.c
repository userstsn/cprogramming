#include <stdio.h>


int main()
{
  int a=0,b=1,n,i;
  printf("Enter the no of fibonachi terms\n");
  scanf("%d",&n);
  for ( i = 2; i < n; i++)
  {
    printf("%d\t",a);
    printf("%d\t",b);
    a=a+b;
    b =a+b;
  }
  
    return 0;
}