#include<stdio.h>
main()
{
	double a,b,z;
	
	scanf("%lf",&a);
	scanf("%lf",&b);
	if (a>=0&&b>=0)
	{
		z=a*b;
		printf("Area : %lf x %lf = %lf",a,b,z);
	}
    
		
	
	else
		printf("Error");
	return 0; 
}
