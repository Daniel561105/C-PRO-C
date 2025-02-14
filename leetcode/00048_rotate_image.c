//48

#include <stdio.h>

// turn clockwise 90 degrees
// transpose and change columns (1 <=> 5) (2 <=> 4)
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    // transpose
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            if (i < j) {
                int temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        } 
    }  
    // switch columns
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            if (j < matrixSize / 2) {
                int temp;
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][matrixSize -1 - j];
                matrix[i][matrixSize -1 - j] = temp;
            }
        }
    }
}

/*
(0,0)(0,1)(0,2)    (0,2)(0,1)(0,0)
(1,0)(1,1)(1,2) => (1,2)(1,1)(1,0)
(2,0)(2,1)(2,2)    (2,2)(2,1)(2,0)
*/