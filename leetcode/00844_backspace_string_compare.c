#include <stdio.h>
#include <stdbool.h>

char* change(char* k) {
    int top = -1;
    char* text = (char*)malloc(sizeof(char)*(strlen(k)+1));
    for (int i = 0; i < strlen(k); i++) {
        if (k[i] != '#') {
            text[++top] = k[i];
        }
        else if (top != -1) {
            top--;
        }
    }
    text[top+1] = '\0';
    return text;
}

bool backspaceCompare(char* s, char* t) {
    //put it into stack one by one,if encounter # pop the last element out
    char* new_s = change(s);
    char* new_t = change(t);
    return strcmp(new_s,new_t) == 0;
}