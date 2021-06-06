#include<stdio.h>
#define PI 3.14285714286
int main()
{
    int r;
    float a;
	scanf("%d",&r);
	if(r>=0)
	{
		double a =PI*(r*r);
		printf("%f",a);
	}
	else
	printf ("Error");
	return 0;
}
