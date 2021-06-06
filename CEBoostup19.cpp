#include<stdio.h>
int main()
{
	int a,b,c,d,x,y;
	printf("a=");
	scanf("%d",&a);
    printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	printf("d=");
	scanf("%d",&d);
	x=a;
	y=c;
	a=b;
	b=d;
	c=x;
	d=y;
	printf("a=%d b=%d c=%d d=%d",a,b,c,d);
	return 0;	
}
