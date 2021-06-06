#include<stdio.h>
int main(){
int i,j=0;

for(i=0; i<=9; i++) 
{
  for(j=0; j<=i; j++){
  	printf("%d",j);
        for(j=1; j<=i; j++){
            printf("%d",i-j);
           }
           printf("\n");
           printf(" ");
        }
    
}

return 0;
}

