#include<stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	a=b;
	c=d;
	b=c;
	printf("a=%d b=%d c=%d d=%d",a,b,c,d);
	return 0;
}
