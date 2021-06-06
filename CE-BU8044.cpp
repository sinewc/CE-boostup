#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%8==0)
	printf("%d",n/8);
    else if(n%8!=0)
	 printf("%d",(n/8)+1);
    return 0;
}
