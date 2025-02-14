//3110

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int absolute(int m) {
    if (m >= 0) {
        return m;
    }
    else {
        return -m;
    }
}


int scoreOfString(char* s) {
    int i;
    int j = 0;
    int k;
    for (i = 0;i < strlen(s) - 1;i++) {
        k = absolute(s[i]-s[i+1]);
        j += k;
    }
    return j;
}

int main() {
    char *c1 = "zaz";
    int i;
    i = scoreOfString(c1);
    printf("%d",i);
    return 0;
}