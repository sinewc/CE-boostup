#include<stdio.h>
int main()
{
	int a=0;
	while (1){
		int buffer;
		scanf("%d",&buffer);
		if(buffer == -1)break;
		a += buffer;
	}
	printf("%d",a);
	return 0;
}
