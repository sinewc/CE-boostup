#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626433
int main(){
 int n;
 double area;
 scanf ("%d",&n);
 if(n>0){
 area=(4*PI*pow(n,3))/3;
 printf("%.8lf",area);
 }
return 0;
}
