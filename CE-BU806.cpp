#include<stdio.h>
int main()
{
	int n;
    scanf("%d",&n);
if(n>0)
{
    for(int i=1;i<=n;i++)
    {
            for(int j=n-i;j>=1;j--)
			{
                printf(" ");
            }
            for(int j=1;j<=(2*i)-j;j++)
			{
            printf("* ");
            }
		printf("\n");   
   }
    for(int i=n-1;i>0;i--)
   {
            for(int j=1;j<=n-i;j++)
			{
                printf(" ");
            }
            for(int j=1;j<=(2*i)-j;j++){
                printf("* ");
            }   
			printf("\n");   
    }
}
else 
printf("Error");
return 0;
}

