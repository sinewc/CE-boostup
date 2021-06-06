#include<stdio.h>
main()
{
	float input,sum=0;
	scanf("%f",&input);
	while(input<=10)
	{
		sum+=input;
		input++;
	}
	printf("%.2f",sum);
	return 0;
}
