#include<stdio.h>
main()
{
	int level;
	scanf ("%d",&level);
	for(int row=level;row<=0;row++)
	{
		for(int star=level;star<=row;star++){
			printf("*")
		}
	}
	printf("\n"); 
	return 0;
}
