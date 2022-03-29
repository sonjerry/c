#include <stdio.h>
#include <string.h>
#define MAX_TERMS 100

typedef struct {

int row;

int col;

int value;

} element;

 

typedef struct SparseMatrix {

element data[MAX_TERMS];

int rows; // 행의 개수

int cols; // 열의 개수

int terms; // 항의 개수

} SparseMatrix;

 

 
SparseMatrix etos(int arr[8][10]) {
    SparseMatrix b;
    int bindex = 0;

    b.rows = 8;
    b.cols = 10;

    for(int i=0; i<strlen(arr); i++){
    for(int j=0; j<strlen(arr[i]); j++){
        if(arr[i][j] != 0){
            b.data[bindex].row = i;
            b.data[bindex].col = j;
            b.data[bindex].value = arr[i][j];
            bindex++;
        }
    }
    return b;
}

int main() {

    int a[8][10] =         { { 0, 0, 0, 0, 2, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0,-3, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0,-1, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }};

 

    int b[8][10] =         { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0,-1, 0, 0, 0, 0, 0, 0 },
    
                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 2, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 }};

 

    int c[8][10] =         { { 0, 0, 0, 0,-2, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 3 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0,-2, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

                             { 0, 0, 0, 0, 0, 0, 4, 0, 0, 0 }};



}
