//2965

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int *answer = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    int n = gridSize; // which means number is from 0 to n^2
    int m = pow(n,2), k = 0;
    int *temp = (int*)malloc(m*sizeof(int));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[k++] = grid[i][j];
        }
    }
    qsort(temp,m,sizeof(int),cmp);
    int dup;
    int a;
    for (a = 1; a < m; a++) {
        if (temp[a] - temp[a-1] == 0) { // 1,2,2,3
            dup = temp[a];
            break;
        }
    } // a=2
    for (a; a < m-1; a++) {
        temp[a] = temp[a+1];
    }

    int sum = 0;
    for (int i = 0; i < m-1; i++) {
        sum += temp[i];
    }
    int miss = (m*(m+1)/2) - sum;
    answer[0] = dup;
    answer[1] = miss;
    return answer;
}