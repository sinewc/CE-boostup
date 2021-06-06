#include<stdio.h>
void triangle(int n){
        int i=0;
        for(int i=n;i>0;i--)
        {
            for(int j=i;j>0;j--)
            {
            printf("*");
            }
            printf("\n");
        }
    }
int main()
{
    int n;
    scanf("%d",&n);
    triangle(n);
return 0 ;
}
