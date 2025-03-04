//20

#include <stdio.h>
#include <stdbool.h>

// get left push it into stack, get right check if it is a pair with the top one
// match => top-1 continue, mismatch return false

bool isValid(char* s) {
    char stack[strlen(s)];
    int top = -1;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') { // when left appears just push them into stack
            stack[++top] = s[i];
        }
        else { // when the right appears
            if (top == -1 || // at the beginning
                (s[i] == ')' && stack[top] != '(') || // the prev one is not pair
                (s[i] == ']' && stack[top] != '[') ||
                (s[i] == '}' && stack[top] != '{')) {
                    return 0;
                }
                top--; // pairs have appeared, so make it back to top-1
        }
    }
    return top == -1; // every pair has got family
}