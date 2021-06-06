##include<stdio.h>
int main()
{
	float a,b,c,x,y,z;
	scanf("%f\n%f\n%f",&a,&b,&c);
	x=b-a;
	y=c-b;
	z=c-a;
	printf("%.2f\n%.2f\n%.2f",x,y,z);
	return 0;
}
