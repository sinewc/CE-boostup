#include<stdio.h>
main()
{
	float x1,y1,x2,y2,a1,a2;
	float d;
	scanf("%d\n%d",&x1,&y1);
	scanf("%d\n%d",&x2,&y2);
	if(x1!=x2&&y1!=y2)
	{
		a1=x1-x2;
		a2=y1-y2;
		d=(a1*a1)+(a2*a2);
		d=d*d;
		printf("%f",d);
	}
    else if	(x1==x2)
    {
    	d=y2-y1;
    	printf("%f",d);
	}
	else if	(y1==y2)
	{
		d=x2-x1;
    	printf("%f",d);
	}
	else
	printf("");
	return 0;
}
