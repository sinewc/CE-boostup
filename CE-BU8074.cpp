#include<stdio.h>
int main()
{
	int n1,n2,i=0,sum=0;
	scanf("%d %d",&n1,&n2);
	if(n1<n2)
	{
		i=n1;
		while(i<=n2)
	   {
		sum+=i;
		i++;
	   }
	}
	else{
		i=n2;
		while (i<=n1)
		{
			sum+=i;
			i++;
		}
	}
	printf("%d",sum);
}
