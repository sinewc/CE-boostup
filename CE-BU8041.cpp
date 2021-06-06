#include<stdio.h> 
int main() { 
    int a,b;
    float sum;
    scanf("%d %d",&a,&b);
    if(a>b){
    sum=a-b;
    }
    else {
    sum=b-a;
    }
    printf("%.2f",sum);
    return 0;
}
