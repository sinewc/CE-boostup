#include<stdio.h>
main()
{
	int a,i;
	float c=0;
	for(i=0;i<=2;i++)
	{
		scanf("%d",&a);
		c=c+a;
	}
	printf("%f",c/10);
	return 0;
}
