#include<stdio.h>
int main()
{
	 char str[100001];
	 int i=0,x=0;
	 scanf("%s",str);
	 while(str[i]!='\0')
	 {
	 	x++;
	 	i++;
	 }
	 printf("%d",x);
	return 0;
}

