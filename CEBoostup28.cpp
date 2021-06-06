#include<stdio.h> 
int main()
{ 
    double grass1,grass2,sum1,sum2;
    scanf("%lf",&grass1);
    grass2=grass1*=12;
    if(grass2>5000000)
    {
    sum1=grass2*0.35;
    sum2=grass2-sum1;
    sum2/=12;
    printf("%.2lf",sum2);
    }
    else if(grass2>2000000)
    {
    sum1=grass2*0.30;
    sum2=grass2-sum1;
    sum2/=12;
    printf("%.2lf",sum2);	
	}
    else if(grass2>1000000)
    {
    sum1=grass2*0.25;
    sum2=grass2-sum1;
    sum2/=12;
    printf("%.2lf",sum2);	
	}
    else if(grass2>750000)
    {
    sum1=grass2*0.20;
    sum2=grass2-sum1;
    sum2/=12;
    printf("%.2lf",sum2);	
	}
    else if(grass2>500000)
    {
    sum1=grass2*0.15;
    sum2=grass2-sum1;
    sum2/=12;
    printf("%.2lf",sum2);
	}
    else if(grass2>300000)
    {
    sum1=grass2*0.10;
    sum2=grass2-sum1;
    sum2/=12;
    printf("%.2lf",sum2);	
	}
    else if(grass2>150000)
    {
    sum1=grass2*0.05;
    sum2=grass2-sum1;
    sum2/=12;
    printf("%.2lf",sum2);	
	}
    else 
    printf("%.2lf",grass2/12);
    return 0;
}
