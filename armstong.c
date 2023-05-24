#include<stdio.h>
int main()
{
	int n,digit,sum=0;

	printf("Enter the number");
	scanf("%d",&n);
		int m=n;
	while(m!=0)
	{
		digit=m%10;
		sum=sum+digit*digit*digit;
		m=m/10;
	}
	if(n==sum)
	{
		printf("%d is the armstrong number",n);
	}
	else
	printf("%d is not the armstrong number",n);
	
	return 0;
}