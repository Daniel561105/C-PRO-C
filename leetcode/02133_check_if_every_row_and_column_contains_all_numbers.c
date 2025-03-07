//2133

#include <stdio.h>
#include <stdbool.h>

bool checkValid(int** matrix, int matrixSize, int* matrixColSize) {
    // every row and column has to combine 1~n if there is duplicate or missing then false
    for (int i = 0; i < matrixSize; i++) {
        const int n = matrixSize;
        int hash[n]; 
        memset(hash, 0, n * sizeof(int));
        for (int j = 0; j < matrixSize; j++) {
            if (hash[matrix[i][j]-1] == 0) {
                hash[matrix[i][j]-1] = 1;
            }
            else return 0;
        }
    }
    for (int i = 0; i < matrixSize; i++) {
        const int n = matrixSize;
        int hash[n]; 
        memset(hash, 0, n * sizeof(int));
        for (int j = 0; j < matrixSize; j++) {
            if (hash[matrix[j][i]-1] == 0) {
                hash[matrix[j][i]-1] = 1;
            }
            else return 0;
        }
    }
    return 1;
}