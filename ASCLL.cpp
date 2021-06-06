#include<stdio.h>
int main()
{
	int num1,num2;
	char ch='A';
	for(num2=1;num2<=8;num2++)
	{
		for(num1=0;num1<=num2;num1++);
		{
			printf("%c",ch+num1+num2);	
		}
		printf("\n");
	}
	return  0;
}
