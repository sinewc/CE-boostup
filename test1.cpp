#include <stdio.h>
#include <string.h>
void uniq(char *arr){
	char clone[50]={};
	int count=0;
	int size = strlen(arr);
	for (int i = 0 ; i < size ; i++){
    	if(i==0){
    		clone[count]=arr[i];
    		count+=1;
		}
		else if(clone[count-1] != arr[i]){
			clone[count]=arr[i];
			count+=1;
		}
    } 
    
    for(int i=0;i<strlen(arr);i++){
    	*(arr+i) = clone[i];
	}
}

int main() {
    char a[50],b[50];
    int y;
    scanf("%s",a);
    scanf("%s",b);
    
    uniq(a);
    uniq(b);
    
    printf("%s\n",a);
    printf("%s\n",b);

    y=strcmp(a,b);
    if(y==0)
    printf("uniq(A)=uniq(B)");
    else
    printf("uniq(A) and uniq(B) not ");
    return 0; 
}
   
