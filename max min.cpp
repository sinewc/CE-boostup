#include<stdio.h>
int main()
{
	int i=0,a[i],n,max=0,min=0;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)
		{
			min=a[i];
			max=a[i];
		}
		if(min>=a[i])min=a[i];
		if(max<=a[i])max=a[i];
	}
printf("%d\n%d",min,max);

return 0;
}
