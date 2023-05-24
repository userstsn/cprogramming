//program to check prime number
#include<stdio.h>
void main()
{
int n, i;
printf("n Enter the number n");
scanf("%d",&n);
for(i=2; i<=n/2; i++)
{
if(n%i==0)
{
printf("n %d is composite",n);
exit(0);
}
}
{
printf("%d is prime",n);
}
exit(0);
}
