#include<stdio.h>
#include<math.h>
#include<string.h>
    
    int str_num(char * str){
        int i,x=0;
        for(i=0;i<strlen(str);i++){
            if(str[i]>='0'&&str[i]<='9')x++;
        }
        if(x==strlen(str))return 1;
        else return 0;
    }

int main(){
    
    int num1=0, num2=0, i;
    char a[100],b[100];
    float n = 0, sum = 0, sum2 = 0, average, sd;
    scanf("%s %s",a,b);
    if(str_num(a)==1&&str_num(b)==1){
        for(i=0;i<strlen(a);i++){
            num1 += (a[i]-'0')+(num1*10);
        }
        for(i=0;i<strlen(b);i++){
            num2 += (b[i]-'0')+(num2*10);
        }
        //printf("%d %d",num1,num2);
        if (num1 < num2){
            for (i = num1; i <= num2; i++){
                printf("%d ", i);
                n++;
                sum += i;
                sum2 += i * i;
            }
        }
        else if(num1 > num2){
            for (i = num1; i >= num2; i--) {
                printf("%d ", i);
                n++;
                sum += i;
                sum2 += i * i;
            }
        }
        else if (num1 == num2){
            printf("Average = %d.0", num1);
            printf("\nSD = 0.00");
        return 0;
        }
 
