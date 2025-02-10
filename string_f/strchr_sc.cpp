#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *sc_strchr(char *s1,char s2) {
    int i = 0;
    int j;
    char *word = (char *)malloc(100);
    while (s1[i] != s2) {
        i++;
    }
    for (j = 0;j < strlen(s1) - i;j++) {
        word[j] = s1[i + j];
    }
    word[j] = '\0';  //remember to add '\0' after a string
    return word;
}

int main() {
    char a[] = "it is a ordinary day";
    printf("%s\n",sc_strchr(a,'d'));
    return 0;
}