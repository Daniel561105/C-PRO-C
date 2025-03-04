//1047

#include <stdio.h>

// use stack, check the element that is going to push inside is equal the top element or not
// if true pop the element at top out, if false push the element inside stack

char* removeDuplicates(char* s) {
    int n = strlen(s);
    char* result = (char*)malloc((n+1)*sizeof(char));
    int i, j = 0;
    result[j++] = s[0];
    for (i = 1; i < n; i++) {
        if (j > 0 && s[i] == result[j-1]) {
            j--;
        }
        else {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';
    return result;
}