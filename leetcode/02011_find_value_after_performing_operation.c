//2011

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//similar to robot moving on 2D

int finalValueAfterOperations(char** operations, int operationsSize) {
    int i;
    int j = 0;
    for (i = 0;i < operationsSize;i++) {
        if (strcmp(operations[i],"--X") == 0 || strcmp(operations[i],"X--") == 0) {
            j -= 1;
        }
        else {
            j += 1;
        }
    }
    return j;
}