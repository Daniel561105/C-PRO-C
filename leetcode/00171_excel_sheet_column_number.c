//171

#include <stdio.h>
#include <math.h>
#include <string.h>

// a string "ACDD" it will make A to 1, C to 3 and, D to 4 
// then result = 1*26^3 + 3*26^2 + 4*26^1 + 4*26^0 = 17576 + 2028 + 104 + 4 = 19712
int titleToNumber(char* columnTitle) {
    int result = 0;
    int len = strlen(columnTitle);
    for (int i = 0;i < len;i++) { 
        result += pow(26,i) * (columnTitle[len - 1 - i] - 'A' + 1);
    }
    return result;
}

int main() {
    char str[] = "ACDD";
    int a = titleToNumber(str);
    printf("%d",a);
    return 0;
}