//1861

#include <stdio.h>

char** rotateTheBox(char** boxGrid, int boxGridSize, int* boxGridColSize, int* returnSize, int** returnColumnSizes) {
    //rotate then create fall logic
    char** result = malloc(boxGridColSize[0]*sizeof(char*));
    *returnSize = boxGridColSize[0];
    *returnColumnSizes = malloc(boxGridColSize[0]*sizeof(int));
    for (int i = 0; i < boxGridColSize[0]; i++) {
        result[i] = (char*)malloc(boxGridSize*sizeof(char));
        (*returnColumnSizes)[i] = boxGridSize;
    }
    //rotate
    for (int i = 0; i < boxGridColSize[0]; i++) {
        for (int j = 0; j < boxGridSize; j++) {
            result[i][j] = boxGrid[boxGridSize-1-j][i];
        }
    }
    //fall logic
    //'#'=stones, '.'=space, '*'=obstacle
    for (int i = 0; i < boxGridSize; i++) {
        int last = boxGridColSize[0]-1; // control last space
        for (int a = boxGridColSize[0]-1; a >= 0; a--) {
            if (result[a][i] == '*') {
                last = a-1;
            }
            else if (result[a][i] == '#') {
                
                result[a][i] = '.';
                result[last][i] = '#';
                last--;
            }
        }
    }
    return result;
}