//796

#include <stdio.h>
#include <stdbool.h>

bool rotateString(char* s, char* goal) {
    char* result = malloc(strlen(s)*2+1);
    strcpy(result,s);
    strcat(result,s);
    for (int i = 0; s[i] != '\0'; i++) {
        int count = 0;
        for (int j = 0; goal[j] != '\0'; j++) {
            if (goal[j] == result[j+i]) {
                count++;
            }
        }
        if (count == strlen(s)) return true;
    }
    return false;
}