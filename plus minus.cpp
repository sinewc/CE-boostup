#include<stdio.h>
#include<string.h>
int main()
{
  char b,e;
  char a[10000];
  char c[10000];
  char d[10000];
  scanf("%s",a);
  scanf(" %c",&b);
  scanf("%s",c);
  if (b=='+')
  {
    if(strlen(a)>strlen(c)){
       a[strlen(a)-strlen(c)]=c[0];
        printf("%s",a);
      }
    if(strlen(a)<strlen(c)){
        c[strlen(c)-strlen(a)]=a[0];
          printf("%s",c);
     }
    if(strlen(a)==strlen(c)) {
        a[0]='2';
           printf("%s",a);
       }
  }
  if (b=='*'){
      d[0]=a[0];
      for (int i=1;i<=strlen(a)+strlen(c)-2;i++){
      d[i]='0';
       }
       printf("%s",d);
    }
  return 0;
}
