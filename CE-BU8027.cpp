#include<stdio.h>
int main()
{
      char name[100];
      gets(name);
      printf("|====================|\n");
      printf("|                    |\n");
	  printf("|%*s|\n",20,name);
      printf("|                    |\n");
      printf("|====================|");
      return 0;
}
