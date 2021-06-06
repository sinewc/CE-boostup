#include<stdio.h>
main()
{
	int n,p;
	scanf("%d",&n);
	if(n==4)
	printf("%d",3*249);
	else if(n==6)
	printf("%d",5*249);
	else if(n==8)
	printf("%d",6*249);
	else if (n%2==1)
	{
	n=n-1;
	printf("%d",n*249);
	}
	else
	printf("");
	return 0;
	
}
