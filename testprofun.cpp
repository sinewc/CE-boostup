#include<stdio.h>
int main(){
	/*int a=10,b=20,c=3;
	int* p1;
	int* p2;
	p1=&a;
	p2=&b;
	printf("%d %d %d %d %d",a,b,c,*p1,*p2);
	a=50;
	printf("\n%d %d %d %d %d",a,b,c,*p1,*p2);
    p2=p1;
    a=c-b;
	printf("\n%d %d %d %d %d",a,b,c,*p1,*p2);
	return 0;
	int i[5]={30,40,50,60,70};
	int*p;
	p=i;
	printf("\n%d %d %d %d ",i[0],*(p+0),p[0],*(i+0));
	p=p+1;
	printf("\n%d %d %d %d ",i[0],*(p+0),p[0],*(i+0));
	return 0;
	*/
	char strx[50];
	char *p;
	scanf("%s",strx);
	p=strx;
	while(*p != '\0'){
		if((*p>='0')&&(*p<='9')){
			printf("%c",*p);
		}
		p=p+1;
	}return 0;
}
