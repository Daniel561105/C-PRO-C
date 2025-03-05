//1614

#include <stdio.h>

int maxDepth(char* s) {
    int record = 0, max = -1;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            record += 1;
        }
        else if (s[i] == ')') {
            record -= 1;
        }
        if (max < record) {
            max = record;
        }
    }
    return max;
}