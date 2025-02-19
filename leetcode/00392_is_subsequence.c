//392

#include <stdio.h>
#include <string.h>

bool isSubsequence(char* s, char* t) {
    int a = 0, b = 0;
    if (strlen(s) == 0) return 1;
     while (b < strlen(t)) {
        if (s[a] == t[b]) {
            a++,b++;
        } 
        else {
            b++;
        }
        if (a == strlen(s)) return 1;
    }
    return 0;
}