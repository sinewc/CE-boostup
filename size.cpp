#include<stdio.h>
void square(int n){
        int i=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
            	if(i>j)
                printf("%d",i);
                else
                printf("*");
            }
            printf("\n");
        }
    }
int main()
{
    int n;
    scanf("%d",&n);
    square(n);
return 0 ;
}
