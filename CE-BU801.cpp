#include<stdio.h>
int main()
{
    double num;
    int num2;
    scanf("%lf",&num);
    num2=int(num);
    if(num==num2)
    {
    if(num2%2==0)
    printf("even");
    else
   	printf("odd");
	}
   	else 
   	printf("Error");
	return 0;
} 
