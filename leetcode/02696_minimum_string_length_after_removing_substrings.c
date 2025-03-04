//2696

#include <stdio.h>

int minLength(char* s) {
    int n = strlen(s);
    char* result = (char*)malloc((n+1)*sizeof(char));
    int top = -1;
    for (int i = 0; i < n; i++) {
        if (top != -1 && result[top] == 'A' && s[i] == 'B') {
            top--;
        }
        else if (top != -1 && result[top] == 'C' && s[i] == 'D') {
            top--;
        }
        else {
            result[++top] = s[i];
        }
    }
    return top+1; // because top is index, so need to add 1
}