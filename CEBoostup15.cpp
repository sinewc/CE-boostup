#include<stdio.h>
 main()
 {
 	int n;
 	scanf("%d",&n);
 	int i=0;
 	for(int i=n;i>=0;i--)
	 {
	 	for(int j=i;j>=0;j--)
	 	{
	 		printf("*");
		}
	printf("\n");
     }
     return 0;
 }
