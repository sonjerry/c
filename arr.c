#include <stdio.h>
#include <string.h>
#define MAX_TERMS 100
#define MAX(a,b) (((a)>(b))?(a):(b))

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
    b.terms = 0;
    b.rows = 8;
    b.cols = 10;

    for(int i=0; i<7; i++){
    for(int j=0; j<9; j++){
        if(arr[i][j] != 0){
            b.data[bindex].row = i;
            b.data[bindex].col = j;
            b.data[bindex].value = arr[i][j];

            bindex++;
            b.terms++;
        }
    }
    }
    return b;
}
SparseMatrix plus(SparseMatrix a, SparseMatrix b){
    
    SparseMatrix c;
    int rows = MAX(a.terms,b.terms);
    int cols = MAX(a.cols,b.cols);


    for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){

    if (a.data[i].row == b.data[i].row && a.data[i].col == b.data[i].col){ //두 행,열이 겹칠 경우 더함

            c.data[i].row = a.data[i].row;
            c.data[i].col = a.data[i].col;
            c.data[i].value = a.data[i].value + b.data[i].value;
        
    }

    }
    }

   
    return c;
}

void matrix_print(SparseMatrix a){
    printf("====================\n");
    for(int i=0; i<a.terms;i++){
        printf("(%d, %d, %d) \n", a.data[i].row, a.data[i].col, a.data[i].value);
    }
    printf("====================\n");
}

void matrix_print2(SparseMatrix a){
    printf("====================\n");

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

    SparseMatrix new;
    new = etos(a);
    matrix_print(new);
    new = etos(b);
    matrix_print(new);
    new = etos(c);
    matrix_print(new);
    return 0;

}
