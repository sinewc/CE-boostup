#include<stdio.h>
#include<math.h>
prime();
int main()
{   
    int a;
    scanf("%d",&a);
    if(prime(a)==0)
        printf("%d is prime",a);
    else
        printf("%d is not prime",a);
    return 0;
}
    int prime(int x)
{
	int p=0, k;
	for(int i=2; i<=sqrt(x); i++)
	{
		if((x%1)==0)
		{
			p=1;
			break;
		}
	}
	if(p==0)
       k=0;
	else
	   k=1;
	return k;
}


