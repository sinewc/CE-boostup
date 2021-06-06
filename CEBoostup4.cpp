#include<stdio.h>
main()
{
	char name[5];
	int age;
	float time;
	printf("Enter nickname = ");
	scanf("%s",&name);
	printf("Enter age = ");
	scanf("%d",&age);
	printf("Enter finished time = ");
	scanf("%f",&time);
	printf("your nickname =%s",name);
	printf("\nyour age = %d",age);
	printf("\nyour finished time = %.2f",time);
return 0;
}
