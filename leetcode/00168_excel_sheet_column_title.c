//168

#include <stdio.h>

// outout is a char array, find the size first
// the difficult part is that if i wanna to change integer into excel form
// then i have to always minus 1 because 'A' started from 1 not 0

char* convertToTitle(int columnNumber) {
    char* result = (char*)malloc(8*sizeof(char));
    int last = 0;
    while (columnNumber > 0) {
        columnNumber--;
        result[last++] = 'A' + (columnNumber % 26);
        columnNumber /= 26;
    }
    result[last] = '\0';
    for (int i = 0, j = last-1; i < j; i++, j--) {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }
    return result;
}

// a = 26
//701 = 26a + 25 = "ZY"
//702 = "ZZ" = 26a + 26
//703 = "AAA" 
//2147483647 = "FXSHRXW"