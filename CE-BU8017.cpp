#include <stdio.h>
int main()
{
    int n,b;
    scanf("%d",&n); 
	if(n>=20&&n<=50000)
	{
        if(n==20)
		printf("1");
        else 
		{
            b=4*(n/20)-5;
            printf("%d",b);
        }
    }
return 0;
}
