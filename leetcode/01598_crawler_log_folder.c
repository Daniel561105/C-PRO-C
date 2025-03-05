//1598

#include <stdio.h>

int minOperations(char** logs, int logsSize) {
    int n = logsSize;
    int top = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(logs[i],"../") == 0) {
            if (top > 0) {
                top -= 1;
            }
            else {
                top += 0;
            }
        }
        else if (strcmp(logs[i],"./") == 0) {
            top += 0;
        }
        else {
            top +=1;
        }
    }
    return top;
}