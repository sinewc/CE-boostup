#include <stdio.h>
#include<conio.h>
main()
{
    char ch[6];
    ch[6]=getch();	
    if (ch[6]/2.0 > 0)
       printf("even");
    else if(ch[6] / 2.0 < 1)
       printf("odd");
    else
       printf("Error");
	return 0;
}
