#include<stdio.h>
main()
{
	int i;
	float sum,input;
	for(i=0;i<10;i++)
	{
		scanf("%f",&input);
		sum+=input;
	}
	printf("%.2f",sum);
	return 0;	 
}
