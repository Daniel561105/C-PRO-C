//682

#include <stdio.h>

int calPoints(char** operations, int operationsSize) {
    int *result = (int*)malloc(operationsSize*sizeof(int));
    int n = operationsSize;
    int top = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(operations[i],"C") == 0) {
            result[--top] = 0;
        }
        else if (strcmp(operations[i],"D") == 0) {
            result[top++] = result[top-1]*2;
        }
        else if (strcmp(operations[i],"+") == 0) {
            result[top++] = result[top-1]+result[top-2];
        }
        else {
            result[top++] = atoi(operations[i]);
        }
    }
    int sum = 0;
    for (int i = 0; i < top; i++) {
        sum += result[i];
    }
    return sum;
}