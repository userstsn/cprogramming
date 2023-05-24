//program to find factorial number
#include<stdio.h>
int main()
{
	int c=1, i ,n;
	printf("Enter the number\n");
	scanf("%d", &n);
	
	for (i=1; i<=n ; i++)
	{
		c= c*i;
	
		
	}
 printf("Factorial of %d is: %d",n,c);    
	
}