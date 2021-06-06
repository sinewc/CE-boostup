#include <iostream>
#include <vector>
#include <cstdio>
#include <stdbool.h>

#define MAX_ROW 50L
#define MAX_COL 100L

using namespace std;

struct str_node {
    struct str_node * Header;
    struct str_node * Left;
    struct str_node * Right;
    struct str_node * Up;
    struct str_node * Down;
    int HeaderID,RowIndex,ColIndex;
};


int nCol;
int nRow;
struct str_node Matrix[MAX_ROW][MAX_COL];
vector<struct str_node*>ResultRow;
struct str_node Root;
struct str_node *RootNode = &Root;
bool Data[MAX_ROW][MAX_COL];
int maxResult;

//functions to get the neighbours (are circular)
inline int dataLeft(int i) { return (i-1 < 0) ? nCol-1 : i-1 ; }
inline int dataRight(int i) { return (i+1) % nCol ; }
inline int dataUp(int i) { return (i-1 < 0) ? nRow-1 : i-1 ; }
inline int dataDown(int i) { return (i+1) % nRow ; }

void CreateToroidalMatrix(void) {

    int a,b, i, j;

    for(a = 0 ; a <= nRow ; a++) {

        for(b=0 ; b < nCol ; b++) {

            if(Data[a][b]) {

                Matrix[a][b].RowIndex = a;
                Matrix[a][b].ColIndex = b;

                // Left pointer
                i = a; j = b; do {j = dataLeft(j); } while (!Data[i][j]);
                Matrix[a][b].Left = &Matrix[i][j];

                // Right pointer
                i = a; j = b; do {j = dataRight(j); } while (!Data[i][j]);
                Matrix[a][b].Right = &Matrix[i][j];

                // Up pointer
                i = a; j = b; do {i = dataUp(i); } while (!Data[i][j]);
                Matrix[a][b].Up = &Matrix[i][j];

                // Down pointer
                i = a; j = b; do {i = dataDown(i); } while (!Data[i][j]);
                Matrix[a][b].Down = &Matrix[i][j];

                //Head pointer
                Matrix[a][b].Header = &Matrix[0][b];
                Matrix[a][b].HeaderID = b+1;

            }
        }
    }
}
