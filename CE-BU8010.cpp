# include<stdio.h>
main()
{
	char name[10];
	float x,y;
	int sum;
	gets(name);
	scanf("%f",&x);
	scanf("%f",&y);
	sum=(y/x)*100;
	printf("%s%d%%",name,sum);
	return 0;
}
