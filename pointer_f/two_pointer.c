/*reverse a string*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *a; // pointer
    char *b; // pointer
    char str[] = "sqlserver";
    char c; 
    a = str;  // point to [0]
    b = str + strlen(str) - 1; // point to [last index]
    for (;a < b;a++,b--) {
        c = *a; // char = char
        *a = *b;
        *b = c;
    }
    printf("%s",str);
    return 0;
}
