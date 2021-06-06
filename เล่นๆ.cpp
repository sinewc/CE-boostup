#include<stdio.h>
int main()
{
	int h[30],g[10];
	scanf("%d",&h);
	h[30]/=1000;
	printf("%d\n",h);
	h[30]%=1000;
	printf("%d",h);
	return 0; 
}

