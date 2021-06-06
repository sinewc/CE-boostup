#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	if(n%3==0&&n%5==0&&n%3==7)
    printf("7");
    else if(n%3==0)
    printf("1");
    else if(n%5==0)
    printf("2");
    else if(n%3==0&&n%5==0)
    printf("3");
    else if(n%7==0)
    printf("4");
    else if(n%3==0&&n%7==0)
    printf("5");
    else if(n%5==0&&n%7==0)
    printf("6");
    else 
	printf("0");
	return 0;
}
