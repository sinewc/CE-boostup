 #include<stdio.h>
main()
{
	int old;
	printf("***YOU OLD****\n");
	printf("your old : ");
	scanf("%d",&old);
	if(old>60)
	printf("Old");
	else if(old>=21)
	printf("Adult");
	else if(old>=12)
	printf("Teen");
	else 
	printf("Kid");
	return 0;
}
