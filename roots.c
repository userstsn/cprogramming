#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,x1,x2,d;
	printf("\n Enter the coeffients");
	scanf("%f %f %f",&a,&b,&c);
	
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("\n The roots are imaginary");
	}
	else
	{
		d= sqrt(d);
		x1= (-b+d)/(2*a);
		x2= (-b-d)/(2*a);
		printf("\n x1=%f \n x2=%f",x1,x2);
	}
	
	
}
