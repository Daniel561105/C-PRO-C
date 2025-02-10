#include <stdio.h>

/*從第一個字開始一個一個找直到找到結尾空字串(\0)為止*/

int sc_strlen(const char *word) {
    int a = 0;
    while (word[a] != '\0') {
        a ++;
    }
    return a;
}

int main() {
    int cnt;
    char *text = "a ,:b  c";
    cnt = sc_strlen(text);
    printf("\"a ,:b  c\" strlen is : %d",cnt);
    return 0;
}