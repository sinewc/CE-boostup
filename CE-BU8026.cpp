#include<stdio.h>
int main()
{
      char name[100];
      gets(name);
	  printf("%*s",30,name);
      return 0;
}
