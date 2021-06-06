#include<stdio.h>
main()
{
	int n;
	float a,b,c,sum; 
	scanf("%d",&n);
	a=n*0.1;
	b=n*0.07;
	c=n*0.07*0.1;
	sum=n+a+b+c;
	printf("Total cost : %.2f",sum);
	return 0;
}
