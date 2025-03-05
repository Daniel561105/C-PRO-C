// 1021

#include <stdio.h>

// we can find that when count == 0, means we don't need that element

char* removeOuterParentheses(char* s) {
    int n = strlen(s);
    char* result = (char*)malloc((n+1)*sizeof(char));
    int count = 0, index = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            if (count > 0) {
                result[index++] = s[i];
            }
            count += 1;
        }
        else {
            count -= 1;
            if (count > 0) {
                result[index++] = s[i];
            }
        }
    }
    result[index] = '\0';
    return result;
}