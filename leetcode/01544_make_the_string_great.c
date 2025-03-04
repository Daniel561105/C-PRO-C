//1544

#include <stdio.h>

char* makeGood(char* s) {
    int n = strlen(s);
    char* stack = (char*)malloc((n+1)*sizeof(char));
    int top = -1;
    for (int i = 0; i < n; i++) {
        if (top != -1 && abs(s[i] - stack[top]) == 32) {
            top--;
        }
        else {
            stack[++top] = s[i];
        }
    }
    stack[top+1] = '\0';
    return stack;
}