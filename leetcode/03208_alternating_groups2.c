//3208

#include <stdio.h>
int numberOfAlternatingGroups(int* colors, int colorsSize, int k) {
    int count = 0;
    int length = 1;
    for (int i = 1; i < colorsSize+k-1; i++) {
        if (colors[i%colorsSize] != colors[(i-1)%colorsSize]) {
            length++;
        }
        else {
            length = 1;
        }
        if (length == k) {
            count += 1;
        }
    }
    return count;
}

// brute force that reach tle
int numberOfAlternatingGroups(int* colors, int colorsSize, int k) {
    int *test = (int *)malloc(2*colorsSize*sizeof(int));
    for (int i = 0; i < 2*colorsSize; i++) {
        test[i] = colors[i%colorsSize];
    }
    int result = 0;
    // traverse every beginning
    for (int i = 0; i < colorsSize; i++) {
        int cnt = 1;
        for (int j = 1; j < k; j++) {
            if (test[i+j] != test[i+j-1]) {
                cnt++;
            }
            else break;
        }
        if (cnt == k) {
            result += 1;
        }
    }
    return result;
}