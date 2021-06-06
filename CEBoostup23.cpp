#include<stdio.h>
#include<math.h>
main()
{
	int l1,l2,l3;
	float sum;
	scanf("%d %d %d ",&l1,&l2,&l3);
	if(l1>=0&&l2>=0&&l3>=0)
	{
		sum=(l1+l2)*l3*0.5;
		printf("Area of Trapezoid is %.2f",sum);
	}
	else
	printf("Error");
	return 0;
}
