#include<stdio.h>
int main()
{
    long x,y,z;
    int i,sum=0;
	scanf("%ld %ld",&x,&y);
	z=x+y;
	if(z<0)
	printf("1");
	else
	{
	while(z>=10)
	{
		sum++;
		z/=10;
	}
    }
	printf("%d",sum+1);
	return 0;
}
