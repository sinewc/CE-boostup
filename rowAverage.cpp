#include "stdio.h" 
#include "conio.h"
#define MAX_ROW 5
#define MAX_COL 6

void num(int table){
	for(int row=0;row<MAX_COL;row++){
		for(int col=0;row<[MAX_COL];col++){
		    printf("\nEnter integer and <return>:");
			scan("%d",&table[row][col]);	
		}
	}
}
void rowAverage(int table[][MAX_COL],float rowAvrg[]){
	for(int row = 0;row<MAX_COL;row++){
		for(int col=0;row<[MAX_COL];col++)
		rowAvrg[row] += table[row][col];
		rowAvrg[row] /= MAX_COL;
	}
}
int main{
	int table[MAX_ROW][MAX_COL];
	float rowAve[MAX_ROWS] ={0};
	float columnAve[MAX_COLS] ={0};
	num(table);
	rowAverage(table,rowAvrg[]);
	printf("\n-----TABLE NUMBER------\n");
	for(int i=0; i<MAX_ROW;i++){
		for(int y<MAX_COL;y++){
			printf("%5d",table[i][y]);
			printf("\n");
		}
	 printf("\n-------ROW AVERAGE-------\n")	
	 for(int i =0;i<MAx_ROW;i++){
	 	printf("%6.2f",rowAve[i]);
	 	printf("\n");
	 	getch();
	 }
	}
	return 0;
}
