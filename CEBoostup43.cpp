#include<stdio.h>
int main()
{
	double point,card,LP;
	scanf("%lf",&point);
	scanf("%lf",&card);
	if(point>0)
	{
		card=card*400;
		LP=point-card;
		printf("LP: %.4lf",LP);
	}
	return 0;
}
