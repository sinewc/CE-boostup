#include<stdio.h>
int main(){
	float thb,usd,money;
	char type;
	printf("You want to check your money in Thai baht or US dollars?");
	printf("\nThai baht : B ");
	printf("\nUS dollars : D ");
	printf("\nType ");
	scanf("%c",&type);
	if(type=='B')
	{
		printf("Your money : ");
		scanf("%f",&money);
		usd=money/32;
		printf("Your money : %.2f Dollars",usd);
	}
	else if(type=='D')
	{
		printf("Your money : ");
		scanf("%f",&money);
		thb=money*32;
		printf("Your money : %.2f Bath",thb);
	}
	else
	   printf("Not this type")
	return 0;
}
